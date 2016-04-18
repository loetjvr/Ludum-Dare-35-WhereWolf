using UnityEngine;

public class Player : MonoBehaviour {
	public int stepSize = 1;
	public int monsterStepSize = 2;
	public bool isMonster = false;
	GridManager gridManager;
	SceneChangeManager sceneManager;
	Animator anim;
	int currStep;

	// Use this for initialization
	void Start () {
		gridManager = FindObjectOfType<GridManager>();
		sceneManager = FindObjectOfType<SceneChangeManager>();
		gridManager.SetPos(gameObject);
		currStep = stepSize;
		anim = GetComponent<Animator>();
	}
	
	void Update () {
		CheckShift();
	}
	
	void CheckGameState () {		
		if (gridManager.GetListSize() == 1) {
			sceneManager.Win();
		}
	}
	
	void CheckShift () {
		if (Input.GetMouseButtonDown(1)) {
			isMonster = !isMonster;
			anim.SetBool("IsMonster", isMonster);
			
			if (isMonster) {
				currStep = monsterStepSize;
			} else {
				currStep = stepSize;
			}
			
			// enemy move
			gridManager.MoveEnemies();
		}
	}
	
	public void Move (Vector2 pos) {
		float step = Mathf.Floor(Vector2.Distance(pos, transform.position));
		
		if (gridManager.CanMove(pos) && step <= currStep) {
			gridManager.Move(gameObject, pos);
			transform.position = pos;
			
			// enemy move
			gridManager.MoveEnemies();
		} else if (isMonster && step <= currStep) {
			GameObject go = gridManager.GetItem(pos);
			// enemy move
			gridManager.MoveEnemies();

			if (go != null && go.tag == "Enemy") {
				// eat
				go.GetComponent<Enemy>().Remove();
				// move to block
				gridManager.Move(gameObject, pos);
				transform.position = pos;
				
				CheckGameState();
			}
		}
	}
}
