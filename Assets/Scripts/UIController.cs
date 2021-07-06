using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public Action OnRoadPlacement, OnHousePlacement, OnSpecialPlacement, OnBigStructurePlacement;
    public Button placeRoadButton, placeHouseButton, placeSpecialButton, placeBigStructureButton;

    public Action OnCarPlacement, OnCopPlacement, OnSecurityPlacement;
    public Button PlaceCarButton, PlaceCopPlacement, PlaceSecurityButton;

    public Color outlineColor;
    List<Button> buttonList;

    private void Start()
    {

        buttonList = new List<Button> { placeHouseButton, placeRoadButton, placeSpecialButton, placeBigStructureButton, PlaceCarButton, PlaceCopPlacement, PlaceSecurityButton };
        placeRoadButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(placeRoadButton);
            OnRoadPlacement?.Invoke();
        });

        placeHouseButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(placeHouseButton);
            OnHousePlacement?.Invoke();
        });

        placeSpecialButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(placeSpecialButton);
            OnSpecialPlacement?.Invoke();
        });

        placeBigStructureButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(placeBigStructureButton);
            OnBigStructurePlacement?.Invoke();
        });

        PlaceCarButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(PlaceCarButton);
            OnCarPlacement?.Invoke();
        });

        PlaceCopPlacement.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(PlaceCopPlacement);
            OnCopPlacement?.Invoke();
        });

        PlaceSecurityButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(PlaceSecurityButton);
            OnSecurityPlacement?.Invoke();
        });

    }

    private void ModifyOutline(Button button)
    {
        var outline = button.GetComponent<Outline>();
        outline.effectColor = outlineColor;
        outline.enabled = true;
    }

    private void ResetButtonColor()
    {
        foreach(Button button in buttonList)
        {
            button.GetComponent<Outline>().enabled = false;
        }
    }
}
