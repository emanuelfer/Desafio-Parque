using SVS;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public CameraMovement cameraMovement;
    public RoadManager roadManager;
    public InputManager inputManager;
    public UIController uiController;
    public static int pontuacao;

    public StructureManager structureManager;

    private void Start()
    {
        pontuacao = 0;
        uiController.OnRoadPlacement += RoadPlacementHandler;
        uiController.OnHousePlacement += HousePlacementHandler;
        uiController.OnSpecialPlacement += SpecialPlacementHandler;
        uiController.OnBigStructurePlacement += BigStructurePlacementHandler;

        uiController.OnSecurityPlacement += PeoplePlacementHandler;
        uiController.OnCarPlacement += CarPlacementHandler;
        uiController.OnCopPlacement += CopPlacementHandler;

        uiController.OnRemoveStructure += RemoveStructureHandler;

    }

    private void RemoveStructureHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.DestroyStrucutre;
    }

    private void CopPlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlaceCop;
    }

    private void CarPlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlaceCar;
    }

    private void BigStructurePlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlaceBigStructure;

    }

    private void SpecialPlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlaceSpecial;
    }

    private void HousePlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlaceHouse;

    }

    private void RoadPlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseHold += roadManager.PlaceRoad;
        inputManager.OnMouseUp += roadManager.FinishPlacingRoad;
        inputManager.OnMouseClick += roadManager.PlaceRoad;
    }

    private void PeoplePlacementHandler()
    {
        ClearInputActions();
        inputManager.OnMouseClick += structureManager.PlacePeople;
    }

    private void ClearInputActions()
    {
        inputManager.OnMouseHold = null;
        inputManager.OnMouseUp = null;
        inputManager.OnMouseClick = null;
    }

    private void Update()
    {
        cameraMovement.MoveCamera(new Vector3(inputManager.CameraMovementVector.x, 0, inputManager.CameraMovementVector.y));

    }
}
