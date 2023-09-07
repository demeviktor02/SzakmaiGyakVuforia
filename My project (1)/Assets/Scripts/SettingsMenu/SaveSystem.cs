using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

public static class SaveSystem
{
    public static void SaveSettings (SettingsMenu settingsMenu)
    {
        BinaryFormatter formatter = new BinaryFormatter();

        string path = Application.persistentDataPath + "/settings.data";
        FileStream stream = new FileStream(path, FileMode.Create);

        SettingMenuData data = new SettingMenuData(settingsMenu);

        formatter.Serialize(stream, data);
        stream.Close();
    }

    public static void SaveAnimationSpeedSettings(SetAnimationSpeed settingsMenu)
    {
        BinaryFormatter formatter = new BinaryFormatter();

        string path = Application.persistentDataPath + "/AnimationSpeedSettings.data";
        FileStream stream = new FileStream(path, FileMode.Create);

        AnimationSpeedSettingsMenu data = new AnimationSpeedSettingsMenu(settingsMenu);

        formatter.Serialize(stream, data);
        stream.Close();
    }

    public static SettingMenuData LoadData()
    {
        string path = Application.persistentDataPath + "/settings.data";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream (path, FileMode.Open);

            SettingMenuData data = formatter.Deserialize(stream) as SettingMenuData;
            stream.Close(); 

            return data;
        }
        else
        {
            Debug.Log("Save file not found in " + path);
            return null;
        }
    }

    public static AnimationSpeedSettingsMenu LoadAnimationSpeedData()
    {
        string path = Application.persistentDataPath + "/AnimationSpeedSettings.data";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

            AnimationSpeedSettingsMenu data = formatter.Deserialize(stream) as AnimationSpeedSettingsMenu;
            stream.Close();

            return data;
        }
        else
        {
            Debug.Log("Save file not found in " + path);
            return null;
        }
    }
}
