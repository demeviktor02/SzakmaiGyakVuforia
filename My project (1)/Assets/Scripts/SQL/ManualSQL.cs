using System;
using System.Collections.ObjectModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using UnityEngine;

public class ManualSQL : MonoBehaviour
{
    const string connectionString = "Data Source=127.0.0.1,1433; Initial Catalog=testDatabase; User ID=sa;Password=password";
    public ObservableCollection<ManualMovement> manuals = new ObservableCollection<ManualMovement>();
    public int i;

    public TMPro.TMP_Text ST050_M_P5_atrako_X_alaptText;
    public TMPro.TMP_Text ST050_M_P5_atrako_X_munkaText;
    public TMPro.TMP_Text ST050_M_P5_atrako_Z_alapText;
    public TMPro.TMP_Text ST050_M_P5_atrako_Z_munkaText;
    public TMPro.TMP_Text ST050_M_P5_megfogo_alapText;
    public TMPro.TMP_Text ST050_M_P5_megfogo_munkaText;

    public Animator manualPanelAnimator;

    public SQL3 sql3;
    public ActiveUser activeUser;

    public bool isActive = false;

    void Start()
    {
        InvokeRepeating("WaitForSql", 0, 1.0f);
    }

    void Update()
    {
        getManualValue();
        ManualPanelPopUpAnimator();
    }

    public void WaitForSql()
    {
        i = 0;
        manuals.Clear();
        manuals = GetManual(connectionString);//"Data Source=192.168.3.3,1433; Initial Catalog=FreeSlimEdgy; User ID=FSE;Password=1234";
        Debug.Log("Manual Lefut");
    }

    public ObservableCollection<ManualMovement> GetManual(string connectionString)
    {
        const string GetUsersQuery = "select * from [Manual]";

        try
        {
            using (var conn = new SqlConnection(connectionString))
            {
                conn.Open();
                if (conn.State == ConnectionState.Open)
                {
                    using (SqlCommand cmd = conn.CreateCommand())
                    {
                        cmd.CommandText = GetUsersQuery;
                        using (SqlDataReader reader = cmd.ExecuteReader())
                        {
                            while (reader.Read())
                            {
                                var manual = new ManualMovement();
                                manual.tagName = reader.GetString(0);
                                manual.value = Convert.ToInt32(reader.GetValue(1));
                                
                                manuals.Add(manual);
                                i++;
                            }
                        }
                    }
                }
            }

            return manuals;
        }
        catch (Exception eSql)
        {
            Debug.Log($"Exception: {eSql.Message}");

        }
        return manuals;
    }

    public void updateManuals(string tagName, int newValue)
    {
        const string GetUsersQuery = "UPDATE [Manual] SET [Value] = @NewValue WHERE [TagName] = @TagName"; //"select * from [Manual]"
        try
        {
            using (var conn = new SqlConnection(connectionString))
            {
                conn.Open();
                if (conn.State ==ConnectionState.Open)
                {
                    using (SqlCommand cmd = conn.CreateCommand())
                    {
                        cmd.CommandText = GetUsersQuery;
                        cmd.Parameters.AddWithValue("@NewValue", newValue);
                        cmd.Parameters.AddWithValue("@TagName", tagName);

                        cmd.ExecuteNonQuery();
                    }
                }
            }
        }
        catch (Exception eSql)
        {
            Debug.Log($"Exception: {eSql.Message}");
        }
    }

    public void ManualsToZero()
    {

       string nullifyQuery = "UPDATE [Manual] SET [Value] = 0";
        try
        {
            using (var conn = new SqlConnection(connectionString))
            {
                conn.Open();
                using (SqlCommand cmd = new SqlCommand(nullifyQuery, conn))
                {
                    cmd.ExecuteNonQuery();
                    Debug.Log("ManualsToZero() lefut");
                }
            }
        }
        catch (Exception ex)
        {
            Console.WriteLine(ex.Message);
        }
    }
    public void SwitchMovement(string moveCommand)
    {

        switch (moveCommand)
        {
            case "UpBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_atrako_Z_alap", 1);
                break;
            case "DownBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_atrako_Z_munka", 1);
                break;
            case "LeftBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_atrako_X_alap", 1);
                break;
            case "RightBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_atrako_X_munka", 1);
                break;
            case "CatchBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_megfogo_alap", 1);
                break;
            case "LetBttn":
                ManualsToZero();
                updateManuals("ST050_M_P5_megfogo_munka", 1);
                break;
            default:
                break;
        }
    }


    public void getManualValue()
    {
        ST050_M_P5_atrako_X_alaptText.text = manuals[0].value.ToString();
        ST050_M_P5_atrako_X_munkaText.text = manuals[1].value.ToString();
        ST050_M_P5_atrako_Z_alapText.text = manuals[2].value.ToString();
        ST050_M_P5_atrako_Z_munkaText.text = manuals[3].value.ToString();
        ST050_M_P5_megfogo_alapText.text = manuals[4].value.ToString();
        ST050_M_P5_megfogo_munkaText.text = manuals[5].value.ToString();
    }

    public void SetActive()
    {
        isActive = true;
    }

    public void SetInactive()
    {
        isActive = false;
    }
    public void ManualPanelPopUpAnimator()
    {
        if (sql3.machines[activeUser.i].Mode == 2 && isActive)
        {
            manualPanelAnimator.Play("ManualPanelPopUp");
        }
        else
        {
            manualPanelAnimator.Play("ManualPanelHide");
        }
    }
}



public class ManualMovement
{
    public string tagName { get; set; }
    public int value { get; set; }
    

    public ManualMovement() { }

    public ManualMovement(string tagName, int value)
    {
        this.tagName = tagName;
        this.value = value;      
    }

}
