using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelGeneration : MonoBehaviour
{
    [Header("Platform Objects")]
    public GameObject startPlatform;
    public GameObject[] listOfPlatforms;
    public GameObject parentObject;
    public GameObject prevPlatform;
    public GameObject currPlatform;

    [Header("Misc")]
    public int platformChoice;
    public float spaceBetween = 20f;

    [Header("Background")]
    public GameObject startBackground;
    public GameObject beforeStartBG;
    public GameObject currBG;
    public GameObject prevBG;
    public GameObject bgForward;
    public GameObject bgBackward;
    public bool forward;
    public bool first;

   


    // Start is called before the first frame update
    void Start()
    {
        platformChoice = Random.Range(0, listOfPlatforms.Length);
        prevPlatform = startPlatform;
        currPlatform = Instantiate(listOfPlatforms[platformChoice], parentObject.transform.position + (transform.right * spaceBetween), new Quaternion(0f,0f,0f,0f));
        currPlatform.transform.parent = parentObject.transform;

        prevBG = startBackground;
        currBG = Instantiate(bgBackward, parentObject.transform.position + (transform.right * spaceBetween) - new Vector3(2.25f, 0, 0), new Quaternion(0f, 0f, 0f, 0f));
        currBG.transform.parent = parentObject.transform;
        forward = false;
        first = true;


    }

    // Update is called once per frame
    void Update()
    {
        if(Camera.main.transform.position.x > currPlatform.transform.position.x)
        {
            Destroy(prevPlatform.gameObject);
            prevPlatform = currPlatform;
            platformChoice = Random.Range(0, listOfPlatforms.Length);
            currPlatform = Instantiate(listOfPlatforms[platformChoice], prevPlatform.transform.position + (transform.right * spaceBetween), new Quaternion(0f, 0f, 0f, 0f));
            currPlatform.transform.parent = parentObject.transform;

            
        }

        if (Camera.main.transform.position.x > currBG.transform.position.x)
        {
            Destroy(prevBG.gameObject);
            if (first)
            {
                Destroy(beforeStartBG.gameObject);
                first = false;
            }

            prevBG = currBG;
            if (forward)
            {
                currBG = Instantiate(bgForward, prevBG.transform.position + (transform.right * spaceBetween) - new Vector3(2.25f, 0, 0), new Quaternion(0f, 0f, 0f, 0f));
                currBG.transform.parent = parentObject.transform;
                forward = !forward;
            }
            else
            {
                currBG = Instantiate(bgBackward, prevBG.transform.position + (transform.right * spaceBetween) - new Vector3(2.25f, 0, 0), new Quaternion(0f, 0f, 0f, 0f));
                currBG.transform.parent = parentObject.transform;
                forward = !forward;
            }
        }
    
    }
}
