using UnityEngine;

public class ObjectClick : MonoBehaviour
{
    public ActiveUser activeUser;

    private void Update()
    {
        gameObject.GetComponent<MeshRenderer>().material.color = Color.white;

        if (Input.GetMouseButtonDown(0))
        {
            if (LookForGameObject(out RaycastHit hit))
            {
                PressDownGameObject(hit.collider.gameObject);
            }
            
        }


        if (Input.GetMouseButtonUp(0))
        {
            if (LookForGameObject(out RaycastHit hit))
            {
                PressUpGameObject(hit.collider.gameObject);
            }
        }
    }

    private bool LookForGameObject(out RaycastHit hit)
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        return Physics.Raycast(ray, out hit);
    }

    private void PressDownGameObject(GameObject targetObject)
    {
        activeUser.i = targetObject.transform.GetSiblingIndex();
    }

    private void PressUpGameObject(GameObject targetObject)
    {
        targetObject.GetComponent<MeshRenderer>().material.color = Color.white;
    }

    private void OverGameObject(GameObject targetObject)
    {
        targetObject.GetComponent<MeshRenderer>().material.color = Color.cyan;
    }

    private void NotOverGameObject(GameObject targetObject)
    {
        targetObject.GetComponent<MeshRenderer>().material.color = Color.white;
    }
}
