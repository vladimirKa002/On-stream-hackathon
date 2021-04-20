using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Run_kill1 : MonoBehaviour
{
    public Vector3 vect = new Vector3(0, 0, 2);
    public float time = 0f;
    public float life_time = 0f;
    public int state = 0;
    private Transform objectTransform;
    private Animator anim;

    void Start()
    {
        objectTransform = GetComponent<Transform>();

        anim = GetComponent<Animator>();
        anim.SetBool("run", true);

        life_time = Random.Range(7f, 10f);
    }

    // Update is called once per frame
    void Update()
    {
        if (time >= life_time)
        {
            anim.SetBool("run", false);
            state = 1;
            return;
        }
        else
        {
            objectTransform.position = objectTransform.position + vect * Time.deltaTime;
            time += Time.deltaTime;
        }
    }
}
