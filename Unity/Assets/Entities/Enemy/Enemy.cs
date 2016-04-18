using UnityEngine;

public class Enemy : MonoBehaviour {
	public int stepSize = 1;
	public int vision = 2;
	public GameObject visionTile;
	public string[] nameArray;
	public int[] stepArray;
	int moveIndex = 0;
	int stepCount = 0;

	GridManager grid;
	Player player;
	SceneChangeManager sceneManager;
	Vector2 currDirection = Vector2.right;
	Animator anim;
	GameObject[] tiles;
		
	// Use this for initialization
	void Start () {
		grid = FindObjectOfType<GridManager>();
		player = FindObjectOfType<Player>();
		sceneManager = FindObjectOfType<SceneChangeManager>();
		anim = GetComponent<Animator>();
		
		tiles = new GameObject[vision + 1];
		grid.SetPos(gameObject);
		GameObject visionContainer = new GameObject("VisionContainer");
		
		for (int i=0; i<=vision; i++) {
			tiles[i] = Instantiate(visionTile);
			tiles[i].transform.parent = visionContainer.transform;
		}
		
		SetVision();
	}
	
	void SetVision () {
		Vector2 pos = transform.position;
		
		for (int i=0; i<=vision; i++) {
			if (grid.InGrid(pos)) {
				tiles[i].SetActive(true);
				tiles[i].transform.position = pos;
			} else {
				tiles[i].SetActive(false);
			}
			
			GameObject go = grid.GetItem(pos);
			
			if (go != null && go.tag == "Player" && player.isMonster) {
				sceneManager.Lose();
			}
			
			pos += currDirection;
		}
	}
	
	void CheckAttack () {
		Vector2 pos = transform.position;
		pos += currDirection;
		
		SetVision();
	}
	
	void NextMove () {
		moveIndex++;
		stepCount = 0;
		
		if (moveIndex == nameArray.Length) {
			moveIndex = 0;
		}
	}
	
	Vector2 GetDirection() {
		Vector2 dir = Vector2.zero;
		
		switch (nameArray[moveIndex]) {
		case "right":
			dir = Vector2.right;
			break;
		case "left":
			dir = Vector2.left;
			break;
		case "up":
			dir = Vector2.up;
			break;
		case "down":
			dir = Vector2.down;
			break;
		}
		
		return dir * stepSize;
	}
	
	public void Remove () {
		for (int i=0; i<vision; i++) {
			Destroy(tiles[i]);
		}
		
		grid.Remove(gameObject);
		Destroy(gameObject);
	}
	
	public void Move () {
		Vector2 pos = transform.position;
		currDirection = GetDirection();
		
		if (stepSize <= 0) {
			return;
		}
		
		if (grid.CanMove(pos + currDirection)) {
			pos += currDirection;
			grid.Move(gameObject, pos);
			transform.position = pos;
			stepCount++;
			
			if (stepArray[moveIndex] > 0 && stepArray[moveIndex] == stepCount) {
				NextMove();
			}
		} else if (!grid.InGrid(pos + currDirection)) {
			NextMove();
		}
		
		currDirection = GetDirection();

		if (currDirection == Vector2.right) {
			anim.SetTrigger("right");
		} else if (currDirection == Vector2.down) {
			anim.SetTrigger("down");
		} else if (currDirection == Vector2.left) {
			anim.SetTrigger("left");
		} else if (currDirection == Vector2.up) {
			anim.SetTrigger("up");
		}
		
		CheckAttack();
	}
}
