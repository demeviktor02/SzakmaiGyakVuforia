using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Data.SqlClient;
using UnityEngine;

public class SQL3 : MonoBehaviour
{

    public ObservableCollection<Machine> machines = new ObservableCollection<Machine>();

    public GameObject activeUser;

    public int i = 0;

    public List<Transform> childrens;

    public GameObject warningSing;

    public GameObject androidPanel;

    public TMPro.TMP_InputField connectionStringText;

    private void Start()
    {

        if (Application.platform == RuntimePlatform.Android)
        {
            androidPanel.SetActive(true);

        }
        else
        {
            InvokeRepeating("WaitForSql", 0, 1.0f);
            activeUser.gameObject.SetActive(true);
        }
        

    }

    public void WaitForSql()
    {
        i = 0;
        machines.Clear();
        machines = GetMachines("Data Source=127.0.0.1,1433; Initial Catalog=testDatabase; User ID=sa;Password=password");//"Data Source=192.168.3.3,1433; Initial Catalog=FreeSlimEdgy; User ID=FSE;Password=1234";
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
        const string GetUsersQuery = "select * from [WSState]";

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
            }

            return machines;
        }
        catch (Exception eSql)
        {
            warningSing.SetActive(true);
            Debug.Log($"Exception: {eSql.Message}");
            machines.Add(new Machine("Mes", 0, 3, "ConveyorState", 0, 0, 0, 0, 0, 0, 0));
            machines.Add(new Machine("ST10", 0, 4, "ConveyorState", 0, 0, -1, -1, 0, 0, 0));
            machines.Add(new Machine("ST20", 0, 6, "ConveyorState", 200, 0, 0, 0, 0, 0, 0));
            machines.Add(new Machine("ST30", 0, 5, "ConveyorState", 300, 0, 0, 0, 0, 0, 0));
            machines.Add(new Machine("ST40", 0, 2, "ConveyorState", 400, 0, 0, 0, 0, 0, 0));
            machines.Add(new Machine("ST50", 1, 2, "ConveyorState", 400, 20, 1, 1, 1, 1, 1));
            machines.Add(new Machine("ST80", 0, 1, "ConveyorState", 400, 20, 0, 0, -1, 1, 1));

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


    public Machine() { }

    public Machine(string name, int switcedOff, int mode, string conveyorState, int counterOk, int counterNok, 
        int alarmExist, int warningExist, int homing, int safetyReady, int run)
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
    }

}




