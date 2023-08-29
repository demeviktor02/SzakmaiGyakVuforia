using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.CompilerServices;
using System.Security.Claims;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

public class ActiveUser : MonoBehaviour
{


    public TMPro.TMP_Text NameText;
    public TMPro.TMP_Text SwitchedOffText;
    public TMPro.TMP_Text ConveyorStateText;
    public TMPro.TMP_Text CounterOKText;
    public TMPro.TMP_Text CounterNOKText;
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

    public Animator manualMoveBttnAnimator;



    void Update()
    {
        NameText.text = sql.machines[i].Name;

        isSwitchedOff(sql.machines[i].SwitcedOff);

        ModeColor(sql.machines[i].Mode);

        ConveyorStateText.text = sql.machines[i].ConveyorState;

        CounterOKText.text = Convert.ToString(sql.machines[i].CounterOk);

        CounterNOKText.text = Convert.ToString(sql.machines[i].CounterNok);

        AlarmExist(sql.machines[i].AlarmExist);

        WarningExist(sql.machines[i].WarningExist);

        Homing(sql.machines[i].Homing);

        isSafetyReady(sql.machines[i].SafetyReady);

        isRunning(sql.machines[i].Run);

        ManualMove(sql.machines[i].Mode, sql.machines[i].SwitcedOff);
    }

    public void FindImageTarget(string TargetName)
    {
        switch (TargetName)
        {
            case "MESImageTarget":
                i = 0; break;
            case "ST10ImageTarget":
                i = 1; break;
            case "ST20ImageTarget":
                i = 2; break;
            case "ST30ImageTarget":
                i = 3; break;
            case "ST40ImageTarget":
                i = 4; break;
            case "ST50ImageTarget":
                i = 5; break;
            case "ST80ImageTarget":
                i = 6; break;
            default: Debug.Log("nemjo a imageTarget"); break;


        }
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
            else if (alarm == 0 && startedAlarmFlassing == true)
            {
                StopAllCoroutines();
                startedHomingflessing = false;
                startedAlarmFlassing = false;
                startedWarningFlassing = false;
                alarmImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
                alarmImage.gameObject.SetActive(false);
            }
        
    }

    public void WarningExist(int warning)
    {
 
            if (warning != 0 && startedWarningFlassing == false)
            {
                StartCoroutine(Flashing(warningImage, new UnityEngine.Color(1.0f, 0.64f, 0.0f), UnityEngine.Color.white));
                startedWarningFlassing = true;
            }
            else if (warning == 0 && startedWarningFlassing == true)
            {
                StopAllCoroutines();
                startedHomingflessing = false;
                startedAlarmFlassing = false;
                startedWarningFlassing = false;
                warningImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
            }

    }

    public void Homing(int homing)
    {
        
            if (homing != 0 && startedHomingflessing == false)
            {
                StartCoroutine(Flashing(homingImage, UnityEngine.Color.green, UnityEngine.Color.white));
                startedHomingflessing = true;
            }
            else if (homing == 0 && startedHomingflessing == true)
            {
                StopAllCoroutines();
                startedHomingflessing = false;
                startedAlarmFlassing = false;
                startedWarningFlassing = false;
                homingImage.gameObject.GetComponent<RawImage>().color = UnityEngine.Color.white;
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

    public void ManualMove(int mode, int switchedOff)
    {
        if (mode == 2 && switchedOff == 0)
            manualMoveBttnAnimator.Play("ManualMoveSetActive");
        else manualMoveBttnAnimator.Play("ManualMoveSetNotActive");

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
