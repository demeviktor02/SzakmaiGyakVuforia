using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SettingMenuData
{
    public bool isSoundOn;
    public float volume;
    public int graphics;
    public bool isFullScreen;
    public bool isDark;
    public int resolution;

    public SettingMenuData(SettingsMenu settingMenu)
    {
        isSoundOn = settingMenu.isSoundOnData;
        volume = settingMenu.volumeData;
        graphics = settingMenu.graphicsData;
        isFullScreen = settingMenu.isFullScreenData;
        isDark = settingMenu.isDarkData;
        resolution = settingMenu.resolutionData;
    }
}
