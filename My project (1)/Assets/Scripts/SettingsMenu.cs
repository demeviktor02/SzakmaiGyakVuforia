using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SettingsMenu : MonoBehaviour
{
    public AudioMixer audioMixer;

    public TMPro.TMP_Dropdown resolutionDropdown;

    Resolution[] resolutions;

    Resolution currentResolution;

    public Toggle FullScreentoggle;

    public Animator darkmodeAnimator;


    void Start()
    {

        FullScreentoggle.isOn = Screen.fullScreen;

        resolutions = Screen.resolutions;

        resolutionDropdown.ClearOptions();

        List<string> options = new List<string>();
        
        int currentResolutionIndex = 0;
        for (int i = 0; i < resolutions.Length; i++)
        {
            string option = resolutions[i].width + " x " + resolutions[i].height + " @ " + (Mathf.Round((float)resolutions[i].refreshRateRatio.value)) + "hz";
            options.Add(option);

            if (resolutions[i].width == Screen.width &&
                resolutions[i].height == Screen.height)
            {
                    currentResolutionIndex = i;             

            }
        }

        resolutionDropdown.AddOptions(options);
        resolutionDropdown.value = currentResolutionIndex;
        resolutionDropdown.RefreshShownValue();
    }

    public void SetResolution(int resolutionIndex)
    {
        Resolution resolution = resolutions[resolutionIndex];
        Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
        currentResolution = resolution;
    }

    public void SetVolume(float volume)
    {
        audioMixer.SetFloat("volume", volume);
    }

    public void SetQuality(int qualityIndex)
    {
        QualitySettings.SetQualityLevel(qualityIndex);
    }

    public void SetFullScreen(bool isFullscreen)
    {
        Screen.SetResolution(currentResolution.width, currentResolution.height, isFullscreen);
    }

    public void SetDarkMode(bool isDarkmode)
    {
        if (isDarkmode == true)
        {
            darkmodeAnimator.Play("DarkMode");
        }
        else if (isDarkmode == false)
        {
            darkmodeAnimator.Play("LightMode");
        }
    }
}
