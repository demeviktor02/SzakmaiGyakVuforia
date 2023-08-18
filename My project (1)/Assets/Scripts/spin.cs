using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spin : MonoBehaviour
{
    [SerializeField] float rotationSpeed = 100f;
    bool dragging = false;
    Rigidbody rb;
    public GameObject ImageTarget;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (Input.GetMouseButtonUp(0))
        {
            dragging = false;
            rb.angularVelocity = Vector3.zero;
            //rb.isKinematic = true;
        }
    }

    public void OnMouseDrag()
    {
        dragging = true;
        //rb.isKinematic = false;
    }

    private void FixedUpdate()
    {
        if (dragging)
        {
            float x = Input.GetAxis("Mouse X") * rotationSpeed * Time.fixedDeltaTime;
            float y = Input.GetAxis("Mouse Y") * rotationSpeed * Time.fixedDeltaTime;

            rb.AddTorque(Vector3.back * x);
            rb.AddTorque(Vector3.right * y);
        }
   


    }

    public void GetBackToNormalRotation()
    {
        //rb.isKinematic = false;
        transform.position = ImageTarget.transform.position;
        transform.rotation = new Quaternion(0, 0, 0, 0);
        //rb.isKinematic = true;
    }


}
