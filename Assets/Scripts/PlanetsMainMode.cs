using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
public class PlanetsMainMode : MonoBehaviour
{
    [SerializeField] TMP_Text planetName;
    [SerializeField] Toggle infoButton;
    Camera mainCamera;
    
    void Start()
    {
        mainCamera = Camera.main;
    }
    
    void OnEnable()
    {
        planetName.text = "";
        infoButton.interactable = false;
    }

    void Update()
    {
        //if (imageManager.trackables.count == 0)
       //{
       //     InteractionController.EnableMode("Scan");
       // }
        //else
        //{
            Ray ray = new Ray(mainCamera.transform.position, mainCamera.transform.forward);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, Mathf.Infinity))
            {

                GameObject planet = hit.collider.gameObject;
                planetName.text = planet.name;
                infoButton.interactable = true;
            }
            else
            {
                planetName.text = "";
                infoButton.interactable = false;               
            }
       // }
    }
}
