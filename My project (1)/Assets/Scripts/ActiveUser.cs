using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;

public class ActiveUser : MonoBehaviour
{
    

    public TMPro.TMP_Text resultText1;
    public TMPro.TMP_Text resultText2;
    public TMPro.TMP_Text resultText3;
    public int i = 0;
    public SQL3 sql; 



    void Start()
    {
        
        sql.GetComponent<SQL3>();
        resultText1.text = sql.users[0].Name;
        resultText2.text = sql.users[0].Age;
        resultText3.text = sql.users[0].Sex;
        sql.childrens[0].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

    void Update()
    {
        resultText1.text = sql.users[i].Name;
        resultText2.text = sql.users[i].Age;
        resultText3.text = sql.users[i].Sex;
        sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

    public void NextUser()
    {


        sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i++;

        if (i == sql.childrens.Count)
        {
            i = 0;
        }

        


    }

    public void PreviousUser()
    {
        sql.childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i--;

        if (i == -1)
        {
            i = sql.childrens.Count - 1;
        }


    }
}
