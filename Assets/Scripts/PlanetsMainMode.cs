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
            Debug.Log("wtf1");
            Ray ray = new Ray(mainCamera.transform.position, mainCamera.transform.forward);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, Mathf.Infinity))
            {
                Debug.Log("wtf2");

                GameObject planet = hit.collider.gameObject;
                Debug.Log(planet.name);
                planetName.text = planet.name;
                infoButton.interactable = true;
            }
            else
            {
                            Debug.Log("wtf3");

                planetName.text = "";
                infoButton.interactable = false;               
            }
       // }
    }
}
