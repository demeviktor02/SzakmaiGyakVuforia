using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Data.SqlClient;
using UnityEngine;

public class ManualSQL : MonoBehaviour
{
    public ObservableCollection<ManualMovement> manuals = new ObservableCollection<ManualMovement>();
    public string connectionString = "Data Source=DESKTOP-FRRK8IE,1433; Initial Catalog=testDatabase; User ID=sa;Password=password";
    public int i;

    public TMPro.TMP_Text ST050_M_P5_atrako_X_alaptText;
    public TMPro.TMP_Text ST050_M_P5_atrako_X_munkaText;
    public TMPro.TMP_Text ST050_M_P5_atrako_Z_alapText;
    public TMPro.TMP_Text ST050_M_P5_atrako_Z_munkaText;
    public TMPro.TMP_Text ST050_M_P5_megfogo_alapText;
    public TMPro.TMP_Text ST050_M_P5_megfogo_munkaText;

    public bool isManualPanelEnabled = false;
    public Animator manualPanelAnimator;

    void Start()
    {
        InvokeRepeating("WaitForSql", 0, 2.0f);
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
        manuals = GetManual("Data Source=DESKTOP-FRRK8IE,1433; Initial Catalog=testDatabase; User ID=sa;Password=password");//"Data Source=192.168.3.3,1433; Initial Catalog=FreeSlimEdgy; User ID=FSE;Password=1234";
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
                if (conn.State == System.Data.ConnectionState.Open)
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

    public void getManualValue()
    {
        ST050_M_P5_atrako_X_alaptText.text = manuals[0].value.ToString();
        ST050_M_P5_atrako_X_munkaText.text = manuals[1].value.ToString();
        ST050_M_P5_atrako_Z_alapText.text = manuals[2].value.ToString();
        ST050_M_P5_atrako_Z_munkaText.text = manuals[3].value.ToString();
        ST050_M_P5_megfogo_alapText.text = manuals[4].value.ToString();
        ST050_M_P5_megfogo_munkaText.text = manuals[5].value.ToString();
    }

    public void IsEnabled()
    {
        isManualPanelEnabled = !isManualPanelEnabled;
    }

    public void IsEnabledFalse()
    {
        isManualPanelEnabled = false;
    }

    public void ManualPanelPopUpAnimator()
    {
        if (isManualPanelEnabled)
            manualPanelAnimator.Play("ManualPanelPopUp");
        else manualPanelAnimator.Play("ManualPanelHide");
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
