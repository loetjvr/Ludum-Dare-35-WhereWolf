using System;
using System.Collections.Generic;
using UnityEngine;

public class GridManager : MonoBehaviour {
	public int gridX = 4;
	public int gridY = 4;
	public GameObject gizmo;
	GameObject[,] grid;
	Tile[,] gridTiles;
	Gizmo[,] gridGizmos;
	int size = 0;
	
	void Awake () {
		InitGrid();
	}
	
	void InitGrid () {
		gridTiles = new Tile[gridX, gridY];
		grid = new GameObject[gridX, gridY];
		
		#if UNITY_EDITOR
			gridGizmos = new Gizmo[gridX, gridY];
			GameObject gizmoParent = new GameObject("GizmoContainer");
		#endif
		
		for (int x=0; x<gridX; x++) {
			for (int y=0; y<gridY; y++) {
				grid[x, y] = null;
				
				#if UNITY_EDITOR
					GameObject go = Instantiate(gizmo, new Vector2(x, y), Quaternion.identity) as GameObject;
					go.transform.parent = gizmoParent.transform;
					
					Gizmo giz = go.GetComponent<Gizmo>();
					giz.color = Color.green;
					giz.radius = 0.25f;
					
					gridGizmos[x, y] = giz;
				#endif
			}	
		}
	}
	
	public bool InGrid (Vector2 pos) {
		int x = (int) pos.x;
		int y = (int) pos.y;
		
		if (x < 0 || y < 0 || x > gridX-1 || y > gridX-1) {
			return false;
		}
		
		return true;
	}
	
	public void MoveEnemies () {
		List<Enemy> moveList = new List<Enemy>();
		
		for (int x=0; x<gridX; x++) {
			for (int y=0; y<gridY; y++) {
				if (grid[x, y] != null && grid[x, y].tag == "Enemy") {
					moveList.Add(grid[x, y].GetComponent<Enemy>());
				}
			}	
		}
		
		for (int i=0; i<moveList.Count; i++) {
			moveList[i].Move();
		}
	}
	
	public void Remove (GameObject go, bool move = false) {
		for (int x=0; x<gridX; x++) {
			for (int y=0; y<gridY; y++) {
				if (grid[x, y] == go) {
					grid[x, y] = null;
					
					if (!move) {
						size--;
					}
					
					#if UNITY_EDITOR
						gridGizmos[x, y].color = Color.green;
					#endif
					
					break;
				}
			}	
		}
	}
	
	public void SetPos (GameObject go) {
		if (!CanMove(go.transform.position)) {
			throw new Exception("ID: Invalid position");
		}
		
		Move (go, go.transform.position);
		
		if (go.tag == "Player" || go.tag == "Enemy") {
			size++;	
		}
	}
	
	public void SetTilePos (Tile tile) {		
		int x = (int) tile.transform.position.x;
		int y = (int) tile.transform.position.y;

		gridTiles[x, y] = tile;
	}
	
	public Tile GetTile (Vector2 pos) {
		int x = (int) pos.x;
		int y = (int) pos.y;
		
		if (x < 0 || y < 0 || x > gridX-1 || y > gridX-1) {
			return null;
		}
		
		return gridTiles[x, y];
	}
	
	public void Move (GameObject go, Vector2 pos) {
		if (!CanMove(pos)) {
			throw new Exception("MOVE: Invalid position");
		}
		
		Remove(go, true);
		
		int x = (int) pos.x;
		int y = (int) pos.y;

		grid[x, y] = go;
		
		#if UNITY_EDITOR
			gridGizmos[x, y].color = Color.red;
		#endif
	}
	
	public bool CanMove (Vector2 pos) {
		int x = (int) pos.x;
		int y = (int) pos.y;
		
		if (x < 0 || y < 0 || x > gridX-1 || y > gridX-1 || grid[x, y] != null) {
			return false;
		}
		
		return true;
	}
	
	public GameObject GetItem(Vector2 pos) {
		int x = (int) pos.x;
		int y = (int) pos.y;
		
		if (x < 0 || y < 0 || x > gridX-1 || y > gridX-1) {
			return null;
		}
		
		return grid[x, y];
	}
	
	public int GetListSize() {
		return size;
	}
}
