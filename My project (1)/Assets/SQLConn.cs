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
    private string connectionString = "Data Source=DESKTOP-FRRK8IE;Initial Catalog=teszt;User ID=DESKTOP-FRRK8IE\�d�;Password=";
    private SqlConnection connection;

    // Unity fel�leti elemek a t�bl�zat megjelen�t�s�hez
    public Text resultText;

    // Film oszt�ly az adatok t�rol�s�hoz
    private class Film
    {
        public string cim;
        public int ev;
        public int hossz;
        public string mufaj;
        public string studioNev;
    }

    // Lista a Film objektumok t�rol�s�hoz
    private List<Film> filmsList = new List<Film>();

    private void Start()
    {
        // Adatb�zis csatlakoz�s inicializ�l�sa
        connection = new SqlConnection(connectionString);
        connection.Open();

        // Adatok lek�rdez�se �s t�rol�sa a filmsList-ben
        RetrieveDataFromDatabase();

        // Eredm�nyek megjelen�t�se a Unity fel�leten
        DisplayResults();
    }

    // Adatok lek�rdez�se az adatb�zisb�l
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

    // Eredm�nyek megjelen�t�se a Unity fel�leten
    private void DisplayResults()
    {
        string result = "Filmek:\n";
        foreach (Film film in filmsList)
        {
            result += $"C�m: {film.cim}, �v: {film.ev}, Hossz: {film.hossz}, M�faj: {film.mufaj}, St�di�: {film.studioNev}\n";
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

