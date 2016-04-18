using UnityEngine;

public class AudioManager : MonoBehaviour {
	AudioSource source;
	
	void Awake () {
		DontDestroyOnLoad(gameObject);
		
		source = GetComponent<AudioSource>();
	}
	
	public void setVolume(float value) {
		source.volume = value;
	}
}
