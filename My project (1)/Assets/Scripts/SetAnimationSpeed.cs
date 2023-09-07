using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing.Drawing2D;
using UnityEngine;

public class SetAnimationSpeed : MonoBehaviour
{
    public float speedX;
    public float speedZ;
    public float speedCatch;
    public TMPro.TMP_Text speedXText;
    public TMPro.TMP_Text speedZText;
    public TMPro.TMP_Text speedCatchText;

    public Animator speedAnimator;

    public void Start()
    {
        speedX = speedAnimator.GetFloat("x");//"atrako_X_Munka"
        speedZ = speedAnimator.GetFloat("z");//"atrako_Z_Munka"
        speedCatch = speedAnimator.GetFloat("catch");//"megfogo_Munka"
        LoadData();
        speedAnimator.SetFloat("x", speedX);
        speedAnimator.SetFloat("z", speedZ);
        speedAnimator.SetFloat("catch", speedCatch);
    }
    public void GetSpeed()
    {
        speedXText.text = Math.Round(speedX,1).ToString();//"atrako_X_Munka"
        speedZText.text = Math.Round(speedZ, 1).ToString();//"atrako_Z_Munka"
        speedCatchText.text = Math.Round(speedCatch, 1).ToString();//"megfogo_Munka"
    }

    public void SetSpeed(string direction)
    {
        switch (direction)
        {
            case "plusX":
                speedAnimator.SetFloat("x",speedX+0.1f);
                speedX = speedAnimator.GetFloat("x");
                SaveData();
                break;
            case "minusX":
                speedAnimator.SetFloat("x", speedX - 0.1f);
                speedX = speedAnimator.GetFloat("x");
                SaveData();
                break;
            case "plusZ":
                speedAnimator.SetFloat("z", speedZ + 0.1f);
                speedZ = speedAnimator.GetFloat("z");
                SaveData();
                break;
            case "minusZ":
                speedAnimator.SetFloat("z", speedZ - 0.1f);
                speedZ = speedAnimator.GetFloat("z");
                SaveData();
                break;
            case "plusCatch":
                speedAnimator.SetFloat("catch", speedCatch + 0.1f);
                speedCatch = speedAnimator.GetFloat("catch");
                SaveData();
                break;
            case "minusCatch":
                speedAnimator.SetFloat("catch", speedCatch - 0.1f);
                speedCatch = speedAnimator.GetFloat("catch");
                SaveData();
                break;
            default:
                break;
        }
    }

    public void SaveData()
    {
        SaveSystem.SaveAnimationSpeedSettings(this);
    }

    public void LoadData()
    {
        AnimationSpeedSettingsMenu data = SaveSystem.LoadAnimationSpeedData();

        speedX = data.speedX;
        speedZ = data.speedZ;
        speedCatch = data.speedCatch;
    }

    void Update()
    {
        GetSpeed();
    }
}
