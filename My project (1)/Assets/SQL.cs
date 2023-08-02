using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.SqlClient;
using UnityEngine;

public class SQL : MonoBehaviour
{
    public TMPro.TMP_Text resultText;

    // Start is called before the first frame update
    void Start()
    {
        string connString = "Data Source = DESKTOP-B1PN1D1; Initial Catalog=Test; Integrated Security=true";
        System.Diagnostics.Debug.WriteLine(connString);

        SqlConnection con = new SqlConnection(connString);
        con.Open();
        string query = "select * from Test";
        SqlCommand sqlCommand = new SqlCommand(query, con);
        SqlDataReader reader = sqlCommand.ExecuteReader();

        while (reader.Read())
        {
            String output = "Output" + reader.GetValue(0);
            Debug.Log(output);
            resultText.text = output;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
