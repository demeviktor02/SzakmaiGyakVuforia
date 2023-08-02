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
//        return "Cím: " + this.cim + " Év: " + this.ev + " Hossz: " + this.hossz + " Mûfaj: " + this.mufaj + " Stúdió: " + this.studio;
//    }
//}

public class SQLConn : MonoBehaviour
{
    

    //private string connectionString = "Data Source=DESKTOP-B1PN1D1;Initial Catalog=Test;User ID='User';Password=''";
    //private SqlConnection connection;

    // Unity felületi elemek a táblázat megjelenítéséhez
    public Text resultText;

    // Film osztály az adatok tárolásához
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

    // Lista a Film objektumok tárolásához
    private List<Film> filmsList = new List<Film>();

    private void Start()
    {
        

        // Adatbázis csatlakozás inicializálása
        //connection = new SqlConnection(connectionString);
        connection.Open();
        Debug.Log("connection established");

        // Adatok lekérdezése és tárolása a filmsList-ben
        RetrieveDataFromDatabase();

        // Eredmények megjelenítése a Unity felületen
        DisplayResults();
    }

    // Adatok lekérdezése az adatbázisból
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

    // Eredmények megjelenítése a Unity felületen
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
        // Adatbázis kapcsolat lezárása
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

