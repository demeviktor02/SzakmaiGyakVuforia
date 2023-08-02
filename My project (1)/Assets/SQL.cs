using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.SqlClient;
using UnityEngine;

public class SQL : MonoBehaviour
{
    public TMPro.TMP_Text resultText1;
    public TMPro.TMP_Text resultText2;
    public TMPro.TMP_Text resultText3;
    public int i = 0;
    List<User> users = new List<User>();

    public List<Transform> childrens;

    // Start is called before the first frame update
    void Start()
    {
        //int childrensCount = transform.childCount;
        //for (int i = 0; i < childrensCount; ++i)
        //{
        //    childrens.Add(transform.GetChild(i));
        //}

        string connString = "Data Source = DESKTOP-B1PN1D1; Initial Catalog=teszt; Integrated Security=true";
        System.Diagnostics.Debug.WriteLine(connString);

        SqlConnection con = new SqlConnection(connString);
        con.Open();
        string query = "select * from testTable";
        SqlCommand sqlCommand = new SqlCommand(query, con);
        SqlDataReader reader = sqlCommand.ExecuteReader();

        while (reader.Read())
        {
            //String output = "Output" + reader.GetValue(0);
            //Debug.Log(output);
            User user = new User(Convert.ToString(reader.GetValue(0)), Convert.ToString(reader.GetValue(1)), Convert.ToString(reader.GetValue(2)), childrens[i]);
            users.Add(user);
            //resultText1.text = Convert.ToString(reader.GetValue(0)); 
            //resultText2.text = Convert.ToString(reader.GetValue(1));
            //resultText3.text = Convert.ToString(reader.GetValue(2));
        }
        resultText1.text = users[0].Name;
        resultText2.text = users[0].Age;
        resultText3.text = users[0].Sex;
    }

    // Update is called once per frame
    public class User
    {
        public string Name { get; set; }
        public string Age { get; set; }
        public string Sex { get; set; }

        public Transform Modelpart { get; set; }


        public User(string Name, string Age, string Sex, Transform modelpart)
        {
            this.Name = Name;
            this.Age = Age;
            this.Sex = Sex;
            this.Modelpart = modelpart;
        }

        public override string ToString()
        {
            return "Person: " + this.Name + " Age: " + this.Age+"Nem: "+this.Sex;
        }
    }
    void Update()
    {
        //NextUser();
        //PreviousUser();
    }
    public void NextUser()
    {
        //if (i< users.Count-1) 
        //{
        //    i=i+1; 
        //    resultText1.text = users[i].Name; 
        //    resultText2.text = users[i].Age;
        //    resultText3.text = users[i].Sex;
        //    childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
        //}

        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i++;

        if (i == childrens.Count)
        {
            i = 0;
        }

        resultText1.text = users[i].Name;
        resultText2.text = users[i].Age;
        resultText3.text = users[i].Sex;
        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;


    }

    public void PreviousUser()
    {
        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i--;

        if (i == -1)
        {
            i = childrens.Count - 1;
        }

        resultText1.text = users[i].Name;
        resultText2.text = users[i].Age;
        resultText3.text = users[i].Sex;
        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }
}
