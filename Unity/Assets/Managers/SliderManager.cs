using UnityEngine;

public class SliderManager : MonoBehaviour {
	AudioManager manager;

	// Use this for initialization
	void Start () {
		manager = FindObjectOfType<AudioManager>();
	}
	
	public void OnChange (float value) {
		manager.setVolume(value);
	}
}
