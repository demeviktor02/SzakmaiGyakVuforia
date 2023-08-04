using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelLoader : MonoBehaviour
{
    public GameObject loadingScreen;
    public Slider slider;
    public TMPro.TMP_Text progressText;


    IEnumerator LoadLevel (int sceneIndex)
    {
        loadingScreen.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        StartCoroutine("LoadAsynchronosly", sceneIndex);
    }

    IEnumerator LoadAsynchronosly (int sceneIndex)
    {
        UnityEngine.AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);

        operation.allowSceneActivation = false;

        loadingScreen.SetActive(true);

        while (!operation.isDone)
        {
            //float progress = Mathf.Clamp01(operation.progress / .9f);
            Debug.Log(operation.progress * 100);

            slider.value = operation.progress;
            progressText.text = operation.progress * 100f + "%";

            if (operation.progress >= 0.9f)
            {
                //Change the Text to show the Scene is ready
                operation.allowSceneActivation = true;
            }

            yield return null;
        }
    }
}
