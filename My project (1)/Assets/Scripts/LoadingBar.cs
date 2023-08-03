using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;
using UnityEngine.UI;

public class LoadingBar : MonoBehaviour
{
    public GameObject LoadingScreen;
    public UnityEngine.UI.Slider slider;
  

    public void LoadLevel(int sceneIndex)
    {
        StartCoroutine(Load(sceneIndex));
    }

    IEnumerator Load(int sceneIndex)
    {
        AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
        LoadingScreen.SetActive(true);
        while (!operation.isDone)
        {
            float progress = Mathf.Clamp01(operation.progress/.9f);
            slider.value = progress;
            //progressText.text = progress * 100f + "%";
            yield return null;  
        }
    }
    
}
