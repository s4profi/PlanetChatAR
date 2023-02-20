    using System.Collections;
    using System.Collections.Generic;
    using UnityEngine;
    using UnityEngine.UI;
     
    namespace UnityEngine.XR.ARFoundation
    {    
        public class Rotator : MonoBehaviour
        {
            private GameObject aRSessionOrigin;
           
            public GameObject target;
            public Transform targetTransform;
     
            // Start is called before the first frame update
            void Start()
            {
                Input.compass.enabled = true;
                Input.location.Start();
     
     
                aRSessionOrigin = GameObject.Find("AR Session Origin");
                var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();
     
                aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
     
                //aRSessionOrigin.MakeContentAppearAt(target, target.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
     
     
                //FindObjectOfType<ARSessionOrigin>().MakeContentAppearAt(target, target.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
            }

            void Update() 
            {
                aRSessionOrigin = GameObject.Find("AR Session Origin");
                var aRScript = aRSessionOrigin.GetComponent<ARSessionOrigin>();
     
                aRScript.MakeContentAppearAt(targetTransform, targetTransform.position, Quaternion.Euler(0, -Input.compass.trueHeading, 0));
     
                Debug.Log("North : " + Input.compass.trueHeading.ToString());
            }
        }
    }
