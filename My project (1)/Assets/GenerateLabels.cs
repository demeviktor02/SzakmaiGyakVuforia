using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data;
using System.Data.SqlTypes;
using UnityEngine.UI;
using System.Data.SqlClient;


public class GenerateLabels : MonoBehaviour
{

    // after the sql query is executed we will have a filled users array
    List<User> users = new List<User>();
    // Use this for initialization
    void Start()
    {
        // initialize global users array
        users = ConnectToDB();
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    // function to connect to the db and the users list
    List<User> ConnectToDB()
    {
        List<User> users = new List<User>();
        // Build connection string
        SqlConnectionStringBuilder builder = new SqlConnectionStringBuilder();
        builder.DataSource = "DESKTOP-B1PN1D1";
        builder.UserID = "USER";
        builder.Password = "";
        builder.InitialCatalog = "dbo.Test";
        try
        {
            // connect to the databases
            using (SqlConnection connection = new SqlConnection(builder.ConnectionString))
            {
                // if open then the connection is established
                connection.Open();
                Debug.Log("connection established");
                // sql command
                string sql = "SELECT * FROM dbo.Test";
                //string sql = "SELECT MAX(u.[Name]), " +
                //    "MAX(u.[AboutMe]), " +
                //    "MAX(u.[UserPrincipalName]), " +
                //    "string_agg(s.[Name], ', '), " +
                //    "u.Id FROM [dbo].[Users] u " +
                //    "inner join [dbo].[UserSkills] us " +
                //    "on us.UserId = u.Id " +
                //    "inner join [dbo].[Skills] s " +
                //    "on us.SkillId = s.Id " +
                //    "group by u.Id";
                // execute sql command
                using (SqlCommand command = new SqlCommand(sql, connection))
                {
                    // read
                    using (SqlDataReader reader = command.ExecuteReader())
                    {
                        // each line in the output
                        while (reader.Read())
                        {
                            // to avoid SqlNullValueException
                            if (!reader.IsDBNull(0)
                                & !reader.IsDBNull(1)
                                & !reader.IsDBNull(3))
                            {

                                // get output parameters
                                string username = reader.GetString(0);
                                string aboutString = reader.GetString(1);
                                // as we are getting a list of skills as 
                                // a single string delimited by comma
                                // we split the string
                                // we now iterate through each skill to initialize our
                                // skill object and put it into skills list

                                // initialize User oobject
                                User user = new User(username.Trim(), aboutString.Trim());
                                users.Add(user);
                            }
                        }
                    }
                }
            }
        }
        catch (SqlException e)
        {
            Debug.Log(e.ToString());
        }
        return users;
    }
}

// init class for skill to create an array list of skills for a user


// init class for User (that is shown on the cube)
public class User
{
    public string Name { get; set; }
    public string About { get; set; }

    public User(string Name, string About)
    {
        this.Name = Name;
        this.About = About;
    }

    public override string ToString()
    {
        return "Person: " + this.Name + " About me: " + this.About;
    }
}
