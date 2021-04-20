using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CameraMovement : MonoBehaviour
{
    private CharacterController controller;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float speed = 1.5f;
    private Transform objectTransform;
    private float centerX = 0.0f;
    private float centerY = 18.0f;
    private float angle = 3.14f;
    private float R = 9.0f;

    private void Start()
    {
        objectTransform = GetComponent<Transform>();
    }

    void Update()
    {
        Vector3 move = new Vector3(centerX + R * (float) Math.Sin(angle), 3f, centerY + R * (float) Math.Cos(angle));
        angle += 0.002f;
        if (angle >= 10.99)
        {
            SceneChanger.ChangeScene("Menu");
            return;
        }
        objectTransform.position =  move;
        //objectTransform.Translate(Input.GetAxis("Horizontal") * playerSpeed, 0f, Input.GetAxis("Vertical") * Time.deltaTime);
    }
}