using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.SqlClient;
using UnityEngine;

public class SQL : MonoBehaviour
{
    public List<User> users = new List<User>();

    public List<Transform> childrens;

    public int i = 0;

    public GameObject activeUser;

    void Start()
    {

        string connString = "Data Source = DESKTOP-FRRK8IE; Initial Catalog=teszt; Integrated Security=true";
        System.Diagnostics.Debug.WriteLine(connString);

        SqlConnection con = new SqlConnection(connString);
        con.Open();
        string query = "select * from testTable";
        SqlCommand sqlCommand = new SqlCommand(query, con);
        SqlDataReader reader = sqlCommand.ExecuteReader();

        while (reader.Read())
        {
            User user = new User(Convert.ToString(reader.GetValue(0)), Convert.ToString(reader.GetValue(1)), Convert.ToString(reader.GetValue(2)), childrens[i]);
            users.Add(user);
            i++;
        }

        activeUser.gameObject.SetActive(true);

    }

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
   

}
