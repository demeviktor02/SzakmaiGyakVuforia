using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Data.SqlClient;
using System.Net.NetworkInformation;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class SQL3 : MonoBehaviour
{

    public ObservableCollection<Machine> machines = new ObservableCollection<Machine>();

    public GameObject activeUser;

    public int i = 0;

    public List<Transform> childrens;

    public GameObject warningSing;

    public GameObject androidPanel;

    public TMPro.TMP_InputField connectionStringText;

    public string connectionString = "Data Source=192.168.3.3,1433; Initial Catalog=FreeSlimEdgy; User ID=FSE;Password=1234";

    private void Start()
    {

        if (Application.platform == RuntimePlatform.Android)
        {
            androidPanel.SetActive(true);

        }
        else
        {
            InvokeRepeating("WaitForSql", 0, 2.0f);
            activeUser.gameObject.SetActive(true);
        }
        

    }

    public void WaitForSql()
    {
        i = 0;
        machines.Clear();
        machines = GetMachines("Data Source=DESKTOP-B1PN1D1,1433; Initial Catalog=teszt; User ID=sa;Password=123");
        Debug.Log("Lefut");
    }

    public void AndroidConnect()
    {
        string connectionString = "Data Source=" + connectionStringText.text + ",1433; Initial Catalog=teszt;User ID=sa;Password=123";
        machines = GetMachines(connectionString);
        activeUser.gameObject.SetActive(true);
    }

    public ObservableCollection<Machine> GetMachines(string connectionString)
    {
        const string GetUsersQuery = "select * from [WSStates]";

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
                                var machine = new Machine();
                                machine.Name = reader.GetString(0);
                                machine.SwitcedOff = Convert.ToInt32(reader.GetValue(1));
                                machine.Mode = Convert.ToInt32(reader.GetValue(2));
                                machine.ConveyorState = "ConveyorState"; //reader.GetString(3);   
                                machine.CounterOk = Convert.ToInt32(reader.GetValue(5));
                                machine.CounterNok = Convert.ToInt32(reader.GetValue(6));
                                machine.AlarmExist = Convert.ToInt32(reader.GetValue(7));
                                machine.WarningExist = Convert.ToInt32(reader.GetValue(8));
                                machine.Homing = Convert.ToInt32(reader.GetValue(9));
                                machine.SafetyReady = Convert.ToInt32(reader.GetValue(10));
                                machine.Run = Convert.ToInt32(reader.GetValue(11));

                                //machine.Modelpart = childrens[i];
                                machines.Add(machine);
                                i++;
                            }
                        }
                    }
                }
                else
                {
                    
                }
            }

            return machines;
        }
        catch (Exception eSql)
        {
            //warningSing.SetActive(true);
            Debug.Log($"Exception: {eSql.Message}");
            //users.Add(new User("S25", "10", "Working", childrens[0]));
            //users.Add(new User("S30", "2", "Loading", childrens[1]));
            //users.Add(new User("S45", "50", "Working", childrens[2]));
            //users.Add(new User("S50", "100", "Sleeping", childrens[3]));
        }
        return machines;
    }


}

public class Machine
{
    public string Name { get; set; }
    public int SwitcedOff { get; set; }
    public int Mode { get; set; }
    public string ConveyorState { get; set; }
    public int CounterOk { get; set; }
    public int CounterNok { get; set; }
    public int AlarmExist { get; set; }
    public int WarningExist { get; set; }
    public int Homing { get; set; }
    public int SafetyReady { get; set; }
    public int Run { get; set; }
    //public Transform Modelpart { get; set; }


    public Machine() { }

    public Machine(string name, int switcedOff, int mode, string conveyorState, int counterOk, int counterNok, 
        int alarmExist, int warningExist, int homing, int safetyReady, int run)//Transform modelpart
    {
        Name = name;
        SwitcedOff = switcedOff;
        Mode = mode;
        ConveyorState = conveyorState;
        CounterOk = counterOk;
        CounterNok = counterNok;
        AlarmExist = alarmExist;
        WarningExist = warningExist;
        Homing = homing;
        SafetyReady = safetyReady;
        Run = run;
        //Modelpart = modelpart;
    }

}




