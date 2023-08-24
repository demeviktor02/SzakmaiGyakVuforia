using System;
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Runtime.CompilerServices;
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


    void Start()
    {
        
        sql.GetComponent<SQL3>();
        NameText.text = sql.machines[0].Name;
        SwitchedOffText.text = Convert.ToString(sql.machines[0].SwitcedOff);
        ModeText.text = Convert.ToString(sql.machines[0].Mode);
        ConveyorStateText.text = sql.machines[0].ConveyorState;
        CounterOKText.text = Convert.ToString(sql.machines[0].CounterOk);
        CounterNOKText.text = Convert.ToString(sql.machines[0].CounterNok);
        AlarmExistText.text = Convert.ToString(sql.machines[0].AlarmExist);
        WarningExistText.text = Convert.ToString(sql.machines[0].WarningExist);
        HomingText.text = Convert.ToString(sql.machines[0].Homing);
        SafetyReadyText.text = Convert.ToString(sql.machines[0].SafetyReady);
        RunText.text = Convert.ToString(sql.machines[0].Run);
        //sql.childrens[0].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

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
        WarningExistText.text = Convert.ToString(sql.machines[i].WarningExist);
        HomingText.text = Convert.ToString(sql.machines[i].Homing);
        SafetyReadyText.text = Convert.ToString(sql.machines[i].SafetyReady);
        RunText.text = Convert.ToString(sql.machines[i].Run);
        //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

    public void isSwitchedOff(int sOff)
    {
        if(sOff==0)
            SwitchedOffText.text = "System Running";
        else SwitchedOffText.text = "System is not Running";
    }

    public void ModeColor(int color)
    {
        switch (color)
        {
            case 0:
                modeImage.gameObject.GetComponent<RawImage>().color= new UnityEngine.Color(255, 255, 255); break;
            case 1:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(0, 255, 0); break;
            case 2:
                modeImage.gameObject.GetComponent<RawImage>().color = new UnityEngine.Color(1.0f, 0.64f, 0.0f); break;//UnityEngine.Color.magenta;
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

    public void NextUser()
    {


        //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i++;

        if (i == sql.machines.Count)
        {
            i = 0;
        }

        


    }

    public void PreviousUser()
    {
       //sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i--;

        if (i == -1)
        {
            i = sql.machines.Count - 1;
        }


    }
}
