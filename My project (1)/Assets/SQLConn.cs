using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Data.Sql;
using UnityEngine.UI;
using System.Data.SqlClient;
using System.Data;


//    public string cim { get; set; }
//    public int ev { get; set; }
//    public int hossz { get; set; }
//    public string mufaj { get; set; }
//    public string studio { get; set; }

//    public Filmek(string cim, int ev, int hossz, string mufaj, string studio)
//    {
//        this.cim = cim;
//        this.ev = ev;
//        this.hossz = hossz;
//        this.mufaj = mufaj;
//        this.studio = studio;
//    }

//    public override string ToString()
//    {
//        return "C�m: " + this.cim + " �v: " + this.ev + " Hossz: " + this.hossz + " M�faj: " + this.mufaj + " St�di�: " + this.studio;
//    }
//}

public class SQLConn : MonoBehaviour
{
    

    //private string connectionString = "Data Source=DESKTOP-B1PN1D1;Initial Catalog=Test;User ID='User';Password=''";
    //private SqlConnection connection;

    // Unity fel�leti elemek a t�bl�zat megjelen�t�s�hez
    public Text resultText;

    // Film oszt�ly az adatok t�rol�s�hoz
    private class Film
    {
        public string Name;
        public string About;

    }

        SqlConnection connection = new SqlConnection(
        new SqlConnectionStringBuilder()
        {
            DataSource = "DESKTOP-B1PN1D1",
            InitialCatalog = "Test",
            UserID = "User",
            Password = ""
        }.ConnectionString);

    // Lista a Film objektumok t�rol�s�hoz
    private List<Film> filmsList = new List<Film>();

    private void Start()
    {
        

        // Adatb�zis csatlakoz�s inicializ�l�sa
        //connection = new SqlConnection(connectionString);
        connection.Open();
        Debug.Log("connection established");

        // Adatok lek�rdez�se �s t�rol�sa a filmsList-ben
        RetrieveDataFromDatabase();

        // Eredm�nyek megjelen�t�se a Unity fel�leten
        DisplayResults();
    }

    // Adatok lek�rdez�se az adatb�zisb�l
    private void RetrieveDataFromDatabase()
    {
        SqlCommand cmd = new SqlCommand("SELECT Name, About FROM Test", connection);
        SqlDataReader reader = cmd.ExecuteReader();

        while (reader.Read())
        {
            Film film = new Film();
            film.Name = reader["Name"].ToString();
            film.About = reader["About"].ToString();
            filmsList.Add(film);
        }

        reader.Close();
    }

    // Eredm�nyek megjelen�t�se a Unity fel�leten
    private void DisplayResults()
    {
        string result = "Filmek:\n";
        foreach (Film film in filmsList)
        {
            result += $"Name: {film.Name}, About: {film.About}\n";
        }

        resultText.text = result;
    }

    private void OnApplicationQuit()
    {
        // Adatb�zis kapcsolat lez�r�sa
        if (connection != null && connection.State != ConnectionState.Closed)
        {
            connection.Close();
        }


        //// Update is called once per frame
        //void Update()
        //{

        //}
    }
}

