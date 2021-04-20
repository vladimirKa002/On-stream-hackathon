using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoldierMovement : MonoBehaviour
{
    private CharacterController controller;
    private Vector3 playerVelocity;
    private bool groundedPlayer;
    private float playerSpeed = 2.0f;
    private float jumpHeight = 0.0f;
    private float gravityValue = 0f;
    private Transform objectTransform;
    public Vector3 PositionOffset = new Vector3(0, 0, 0);
    private double time = 0;

    private int x = 0;

    private void Start()
    {
        objectTransform = GetComponent<Transform>();
    }

    void Update()
    {
        time += Time.deltaTime;
        if (time >= 3.5) return;
        objectTransform.position = objectTransform.position + PositionOffset * Time.deltaTime;
        //objectTransform.Translate(Input.GetAxis("Horizontal") * playerSpeed, 0f, Input.GetAxis("Vertical") * Time.deltaTime);
    }
}