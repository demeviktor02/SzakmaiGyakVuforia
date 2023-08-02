using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColor : MonoBehaviour
{
    public List<Transform> childrens;
    public List<Color> colors = new List<Color>();
    public int i = 0;

    // Start is called before the first frame update
    void Start()
    {
        int childrensCount = transform.childCount;
        for (int i = 0; i < childrensCount; ++i)
        {
            childrens.Add(transform.GetChild(i));
        }
            
    }

    // Update is called once per frame
    void Update()
    {
        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
    }

    public void NextGameobjectTurnRed()
    {
        int childrensCount = transform.childCount;

        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i++;
        if (i == childrensCount)
        {
            i = 0;
        }
        
        
    }

    public void PreviousGameobjectTurnRed()
    {
        int childrensCount = transform.childCount;

        childrens[i].gameObject.GetComponent<MeshRenderer>().material.color = Color.white;
        i--;
        if (i == 0)
        {
            i = 4;
        }


    }
}
