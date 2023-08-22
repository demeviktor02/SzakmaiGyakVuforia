using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Data.SqlClient;
using Unity.VisualScripting;
using UnityEngine;

public class SQL3 : MonoBehaviour
{

    public ObservableCollection<User> users = new ObservableCollection<User>();

    public GameObject activeUser;

    public int i = 0;

    public List<Transform> childrens;

    public GameObject warningSing;

    private void Start()
    {
        string connectionString = "Data Source=DESKTOP-B1PN1D1,1433; Initial Catalog=teszt;User ID=sa;Password=123"; //@"Data Source=DESKTOP-B1PN1D1;Initial Catalog=teszt;Integrated Security=SSPI"
        users = GetUsers(connectionString);
        activeUser.gameObject.SetActive(true);
    }

    public ObservableCollection<User> GetUsers(string connectionString)
    {
        const string GetUsersQuery = "select * from [testTable]";

        try
        {
            using (var conn = new SqlConnection(connectionString))
            {
                conn.Open();
                if (conn.State == System.Data.ConnectionState.Open)
                {
                    using (SqlCommand cmd = conn.CreateCommand())
                    {
                        cmd.CommandText = GetUsersQuery;
                        using (SqlDataReader reader = cmd.ExecuteReader())
                        {
                            while (reader.Read())
                            {
                                var user = new User();
                                user.Name = reader.GetString(0);
                                user.Age = Convert.ToString(reader.GetValue(1));
                                user.Sex = reader.GetString(2);
                                user.Modelpart = childrens[i];
                                users.Add(user);
                                i++;
                            }
                        }
                    }
                }
                else
                {
                    
                }
            }

            return users;
        }
        catch (Exception eSql)
        {
            warningSing.SetActive(true);
            Debug.Log($"Exception: {eSql.Message}");
            users.Add(new User("S25", "10", "Working", childrens[0]));
            users.Add(new User("S30", "2", "Loading", childrens[1]));
            users.Add(new User("S45", "50", "Working", childrens[2]));
            users.Add(new User("S50", "100", "Sleeping", childrens[3]));
        }
        return users;
    }
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

    public User() { }

    public override string ToString()
    {
        return "Person: " + this.Name + " Age: " + this.Age + "Sex: " + this.Sex;
    }
}




