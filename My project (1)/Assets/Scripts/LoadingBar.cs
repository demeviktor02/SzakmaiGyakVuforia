using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingBar : MonoBehaviour
{

    public GameObject LoaderUI;
    public UnityEngine.UI.Slider progressSlider;
    public TMPro.TMP_Text progressText;
    public Animator animator;

    public void LoadScene(int index)
    {
        
        StartCoroutine(LoadScene_Coroutine(index));
    }


    public IEnumerator LoadScene_Coroutine(int index)
    {
        animator.Play("Loading");
        yield return new WaitForSeconds(0.7f);

        progressSlider.value = 0;
        LoaderUI.SetActive(true);

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);
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

    public IEnumerator QuitAnimation()
    {
        animator.Play("Exit");
        yield return new WaitForSeconds(1f);
        Application.Quit();
    }

    public void Quit()
    {
        StartCoroutine(QuitAnimation());
    }
}