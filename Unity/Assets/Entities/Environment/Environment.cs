using UnityEngine;

public class Environment : MonoBehaviour {
	GridManager grid;

	// Use this for initialization
	void Start () {
		grid = FindObjectOfType<GridManager>();
		grid.SetPos(gameObject);
	}
}
