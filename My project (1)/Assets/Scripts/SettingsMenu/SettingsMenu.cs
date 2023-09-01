using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SettingsMenu : MonoBehaviour
{
    public AudioMixer audioMixer;   

    Resolution[] resolutions;

    public Toggle FullScreentoggle;

    public Toggle SoundOnToggle;

    public Toggle darkModeToggle;

    public TMPro.TMP_Dropdown qualityDropdonw;

    public TMPro.TMP_Dropdown resolutionDropdown;

    public Slider volumeSlider;

    public Animator darkmodeAnimator;

    public SettingMenuData settingsMenuData;

    public bool isSoundOnData = false;
    public float volumeData = -80;
    public int graphicsData = 0;
    public bool isFullScreenData = true;
    public bool isDarkData = false;
    public int resolutionData = 0;


    void Start()
    {
        LoadData();

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
        if (resolutionData is Null)
        {
            resolutionDropdown.value = currentResolutionIndex;
        }
        resolutionDropdown.RefreshShownValue();

        IsSoundOn(isSoundOnData);
        SetVolume(volumeData);
        SetQuality(graphicsData);
        SetFullScreen(isFullScreenData);
        SetDarkMode(isDarkData);
        SetResolution(resolutionData);


    }

    public void SetResolution(int resolutionIndex)
    {
        Resolution resolution = resolutions[resolutionIndex];
        Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
        //currentResolution = resolution;

        resolutionDropdown.value = resolutionIndex;

        resolutionData = resolutionIndex;

        SaveData();
    }

    public void SetVolume(float volume)
    {
        audioMixer.SetFloat("volume", volume);

        volumeSlider.value = volume;

        volumeData = volume;

        SaveData();
    }

    public void SetQuality(int qualityIndex)
    {
        QualitySettings.SetQualityLevel(qualityIndex);

        qualityDropdonw.value = qualityIndex;

        graphicsData = qualityIndex;

        SaveData();
    }

    public void SetFullScreen(bool isFullscreen)
    {
        Screen.SetResolution(resolutions[resolutionData].width, resolutions[resolutionData].height, isFullscreen);
        //Screen.fullScreen = isFullscreen;

        FullScreentoggle.isOn = isFullscreen;

        isFullScreenData = isFullscreen;

        SaveData();
    }

    public void IsSoundOn(bool isSoundOn)
    {
        SoundOnToggle.isOn = isSoundOn;

        isSoundOnData = isSoundOn;

        SaveData();
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

        isDarkData = isDarkmode;

        darkModeToggle.isOn = isDarkmode;

        SaveData();
    }

    public void SaveData()
    {
        SaveSystem.SaveSettings(this);
    }

    public void LoadData()
    {
        SettingMenuData data = SaveSystem.LoadData();

        isSoundOnData = data.isSoundOn;
        volumeData = data.volume;
        graphicsData = data.graphics;
        isFullScreenData = data.isFullScreen;
        isDarkData = data.isDark;
        resolutionData = data.resolution;
    }
}
