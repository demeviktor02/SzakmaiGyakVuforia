using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.CompilerServices;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class ActiveUser : MonoBehaviour
{


    public TMPro.TMP_Text NameText;
    public TMPro.TMP_Text SwitchedOffText;
    public TMPro.TMP_Text ModeText;
    public TMPro.TMP_Text ConveyorStateText;
    public TMPro.TMP_Text CounterOKText;
    public TMPro.TMP_Text CounterNOKText;
    public TMPro.TMP_Text AlarmExistText;
    public TMPro.TMP_Text WarningExistText;
    public TMPro.TMP_Text HomingText;
    public TMPro.TMP_Text SafetyReadyText;
    public TMPro.TMP_Text RunText;
    public int i = 0;
    public SQL3 sql;
    public RawImage modeImage;

    public bool startedAlarmFlassing;
    public RawImage alarmImage;

    public bool startedWarningFlassing;
    public RawImage warningImage;

    public bool startedHomingflessing;
    public RawImage homingImage;

    public RawImage safetyReadyImage;
    public RawImage runImage;



    void Update()
    {
        NameText.text = sql.machines[i].Name;

        isSwitchedOff(sql.machines[i].SwitcedOff);

        ModeText.text = Convert.ToString(sql.machines[i].Mode);
        ModeColor(sql.machines[i].Mode);

        ConveyorStateText.text = sql.machines[i].ConveyorState;

        CounterOKText.text = Convert.ToString(sql.machines[i].CounterOk);

        CounterNOKText.text = Convert.ToString(sql.machines[i].CounterNok);

        AlarmExistText.text = Convert.ToString(sql.machines[i].AlarmExist);
        AlarmExist(sql.machines[i].AlarmExist);

        WarningExistText.text = Convert.ToString(sql.machines[i].WarningExist);
        WarningExist(sql.machines[i].WarningExist);

        HomingText.text = Convert.ToString(sql.machines[i].Homing);
        Homing(sql.machines[i].Homing);

        SafetyReadyText.text = Convert.ToString(sql.machines[i].SafetyReady);
        isSafetyReady(sql.machines[i].SafetyReady);

        RunText.text = Convert.ToString(sql.machines[i].Run);
        isRunning(sql.machines[i].Run);
        //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

    public void isSwitchedOff(int sOff)
    {
        if (sOff == 0)
            SwitchedOffText.text = "System Running";
        else SwitchedOffText.text = "System is not Running";
    }

    public void ModeColor(int color)
    {
        switch (color)
        {
            case 0:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(255, 255, 255); break;
            case 1:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(0, 255, 0); break;
            case 2:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(1.0f, 0.64f, 0.0f); break;
            case 3:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(255, 255, 0); break;
            case 4:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(255, 0, 0); break;
            case 5:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(0, 255, 255); break;
            case 6:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(204, 153, 0); break;
            case 7:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(0, 204, 0); break;
            default: Debug.Log("nemjo a szám"); break;


        }
    }

    public void AlarmExist(int alarm)
    {

        if (alarm != 0 && startedAlarmFlassing == false)
        {
            alarmImage.gameObject.SetActive(true);
            StartCoroutine(Flashing(alarmImage, UnityEngine.Color.red, UnityEngine.Color.white));
            startedAlarmFlassing = true;
        }
    }

    public void WarningExist(int warning)
    {
        if (warning != 0 && startedWarningFlassing == false)
        {
            StartCoroutine(Flashing(warningImage, new UnityEngine.Color(1.0f, 0.64f, 0.0f), UnityEngine.Color.white));
            startedWarningFlassing = true;
        }
    }

    public void Homing(int homing)
    {
        if (homing != 0 && startedHomingflessing == false)
        {
            StartCoroutine(Flashing(homingImage, UnityEngine.Color.green, UnityEngine.Color.white));
            startedHomingflessing = true;
        }
    }

    public void isSafetyReady(int sReady)
    {
        if (sReady != 0)
        {
            safetyReadyImage.gameObject.SetActive(true);
        }
        else safetyReadyImage.gameObject.SetActive(false);
    }
    public void isRunning(int running)
    {
        if (running != 0)
        {
            runImage.gameObject.SetActive(true);
        }
        else runImage.gameObject.SetActive(false);
    }

    public IEnumerator Flashing(RawImage image, UnityEngine.Color firstColor, UnityEngine.Color secondcolor)
    {
        while (true)
        {
            Debug.Log("SzíntVált");

            image.gameObject.GetComponent<RawImage>().color = firstColor;

            yield return new WaitForSeconds(0.4f);

            image.gameObject.GetComponent<RawImage>().color = secondcolor;

            yield return new WaitForSeconds(0.4f);
        }

    }

    public void NextUser()
    {
        startedHomingflessing = false;
        startedAlarmFlassing = false;
        startedWarningFlassing = false;
        StopAllCoroutines();
        alarmImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        homingImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        warningImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        alarmImage.gameObject.SetActive(false);
        //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i++;

        if (i == sql.machines.Count)
        {
            i = 0;
        }




    }

    public void PreviousUser()
    {
        
        startedHomingflessing = false;
        startedAlarmFlassing = false;
        startedWarningFlassing = false;
        StopAllCoroutines();
        alarmImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        homingImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        warningImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
        alarmImage.gameObject.SetActive(false);
        //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i--;

        if (i == -1)
        {
            i = sql.machines.Count - 1;
        }


    }
}
