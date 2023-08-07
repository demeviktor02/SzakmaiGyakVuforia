using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;
using UnityEngine.UI;

public class LoadingBar : MonoBehaviour
{
    //public GameObject LoadingScreen;
    //public UnityEngine.UI.Slider slider;


    //public void LoadLevel(int sceneIndex)
    //{
    //    StartCoroutine(Load(sceneIndex));
    //}

    //IEnumerator Load(int sceneIndex)
    //{
    //    AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
    //    LoadingScreen.SetActive(true);
    //    while (!operation.isDone)
    //    {
    //        float progress = Mathf.Clamp01(operation.progress / .9f);
    //        slider.value = progress;
    //        //progressText.text = progress * 100f + "%";
    //        yield return null;
    //    }
    //}



    public GameObject LoaderUI;
    public UnityEngine.UI.Slider progressSlider;
    public TMPro.TMP_Text progressText;

    public void LoadScene(int index)
    {
        StartCoroutine(LoadScene_Coroutine(index));
    }

    public IEnumerator LoadScene_Coroutine(int index)
    {
        progressSlider.value = 0;
        LoaderUI.SetActive(true);

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(1);
        asyncOperation.allowSceneActivation = false;
        float progress = 0;

        while (!asyncOperation.isDone)
        {
            progress = Mathf.MoveTowards(progress, asyncOperation.progress, Time.deltaTime);
            progressSlider.value = progress;
            progressText.text = Mathf.Round(progress * 100f) + "%";

            if (progress >= 0.9f)
            {
                progressText.text = Mathf.Round(progress * 100f) + 10 + "%";
                progressSlider.value = 1;
                asyncOperation.allowSceneActivation = true;
            }
            yield return null;

        }
    }
}