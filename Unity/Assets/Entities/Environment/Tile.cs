using UnityEngine;

public class Tile : MonoBehaviour {
	Player player;
	GridManager grid;
	SpriteRenderer sprite;

	// Use this for initialization
	void Start () {
		grid = FindObjectOfType<GridManager>();
		player = FindObjectOfType<Player>();
		sprite = GetComponent<SpriteRenderer>(); 
		
		grid.SetTilePos(this);
	}
	
	void OnMouseDown () {
		player.Move (transform.position);
	}
	
	public void SetColour(Color color) {
		sprite.color = color;
	}
}
