using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChatActivator : MonoBehaviour
{
    // Start is called before the first frame update
    public void activateChat()
    {
        GameObject chat = GameObject.Find("Chat");
        chat.transform.GetChild(0).gameObject.SetActive(true);
        Debug.Log("JO");
    }

    // Update is called once per frame

    public void deactivateChat()
    {
        GameObject chat = GameObject.Find("Chat");
        chat.transform.GetChild(0).gameObject.SetActive(false);
                Debug.Log("J2O");

    }
}
