using UnityEngine;

public class Gizmo : MonoBehaviour {
	public float radius = 0.25f;
	public Color color = Color.green;
    
    void OnDrawGizmos () {
        Gizmos.color = color;
        Gizmos.DrawWireSphere(transform.position, radius);
    }
}
