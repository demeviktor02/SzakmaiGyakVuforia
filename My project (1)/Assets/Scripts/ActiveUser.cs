using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

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

        if (Convert.ToString(sql.machines[i].SwitcedOff) == "0")
        {
            SwitchedOffText.text = "System Running";
        }
        else
        {
            SwitchedOffText.text = "System is not Running";
        }
        

        ModeText.text = Convert.ToString(sql.machines[i].Mode);
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
