using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorkAnimation : MonoBehaviour
{
    public ManualSQL manualSql;
    public Animator workAnimator;
    public ActiveUser activeUser;

    void Update()
    {
        XWork();
        XBase();
        YWork();
        YBase();
        CatchWork();
        CatchBase();
    }


    public void XWork()
    {
        if (manualSql.manuals[0].value == 1)
        {
            workAnimator.Play("atrako_X_Alap");
        }
    }

    public void XBase() 
    {
        if (manualSql.manuals[1].value == 1)
        {
            workAnimator.Play("atrako_X_Munka");
        }
    }
    public void YWork() 
    {
        if (manualSql.manuals[2].value == 1)
        {
            workAnimator.Play("atrako_Z_Alap");
        }
    }

    public void YBase()
    {
        if (manualSql.manuals[3].value == 1)
        {
            workAnimator.Play("atrako_Z_Munka");
        }
    }

    public void CatchWork()
    {
        if (manualSql.manuals[4].value == 1)
        {
            workAnimator.Play("megfogo_Alap");
        }
    }

    public void CatchBase()
    {
        if (manualSql.manuals[5].value == 1)
        {
            workAnimator.Play("megfogo_Munka");
        }
    }
}
