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
    private string connectionString = "Data Source=DESKTOP-FRRK8IE;Initial Catalog=teszt;User ID=DESKTOP-FRRK8IE\Ádõ;Password=";
    private SqlConnection connection;

    // Unity felületi elemek a táblázat megjelenítéséhez
    public Text resultText;

    // Film osztály az adatok tárolásához
    private class Film
    {
        public string cim;
        public int ev;
        public int hossz;
        public string mufaj;
        public string studioNev;
    }

    // Lista a Film objektumok tárolásához
    private List<Film> filmsList = new List<Film>();

    private void Start()
    {
        // Adatbázis csatlakozás inicializálása
        connection = new SqlConnection(connectionString);
        connection.Open();

        // Adatok lekérdezése és tárolása a filmsList-ben
        RetrieveDataFromDatabase();

        // Eredmények megjelenítése a Unity felületen
        DisplayResults();
    }

    // Adatok lekérdezése az adatbázisból
    private void RetrieveDataFromDatabase()
    {
        SqlCommand cmd = new SqlCommand("SELECT cim, ev, hossz, mufaj, studioNev FROM Filmek", connection);
        SqlDataReader reader = cmd.ExecuteReader();

        while (reader.Read())
        {
            Film film = new Film();
            film.cim = reader["cim"].ToString();
            film.ev = int.Parse(reader["ev"].ToString());
            film.hossz = int.Parse(reader["hossz"].ToString());
            film.mufaj = reader["mufaj"].ToString();
            film.studioNev = reader["studioNev"].ToString();
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
            result += $"Cím: {film.cim}, Év: {film.ev}, Hossz: {film.hossz}, Mûfaj: {film.mufaj}, Stúdió: {film.studioNev}\n";
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

