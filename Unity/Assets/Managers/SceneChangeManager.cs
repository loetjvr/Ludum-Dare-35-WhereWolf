using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChangeManager : MonoBehaviour {
	public GameObject win;
	public GameObject lose;
	public GameObject[] hide;
	public int level;
	public int nextLevel;

	void Hide () {
		if (hide == null) {
			for (int i=0; i<hide.Length; i++) {
				hide[i].SetActive(false);
			}
		}
	}

	public void Win() {
		Hide();
		win.SetActive(true);
	}
	
	public void Lose() {
		Hide();
		lose.SetActive(true);
	}
	
	public void Retry() {
		SceneManager.LoadScene("Level" + level.ToString());
	}
	
	public void NextLevel() {
		SceneManager.LoadScene("Level" + nextLevel.ToString());
	}

	public void NextScene(string name) {
		SceneManager.LoadScene(name);
	}
}
