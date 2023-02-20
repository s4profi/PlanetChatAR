using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
public class PlanetDetection : MonoBehaviour
{
    [SerializeField] TMP_Text planetName;
    [SerializeField] Toggle chatButton;
    Camera mainCamera;
    
    void Start()
    {
        mainCamera = Camera.main;
    }
    
    void OnEnable()
    {
        planetName.text = "";
        chatButton.interactable = false;
    }

    void Update()
    {
        Ray ray = new Ray(mainCamera.transform.position, mainCamera.transform.forward);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {

            GameObject planet = hit.collider.gameObject;
            planetName.text = planet.name;
            chatButton.interactable = true;
        }
        else
        {
            planetName.text = "";
            chatButton.interactable = false;               
        }
    }
}
