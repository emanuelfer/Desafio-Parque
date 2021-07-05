using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Canvas2Controller : MonoBehaviour
{
    public Action OnCarPlacement, OnDinoPlacement, OnSecurityPlacement;
    public Button PlaceCarButton, PlaceDinoButton, PlaceSecurityButton;

    public Color outlineColor;
    List<Button> buttonList;

    void Start()
    {
        buttonList = new List<Button> { PlaceCarButton, PlaceDinoButton, PlaceSecurityButton };
        PlaceCarButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(PlaceCarButton);
            OnCarPlacement?.Invoke();
        });

        PlaceDinoButton.onClick.AddListener(() =>
        {
            ResetButtonColor();
            ModifyOutline(PlaceDinoButton);
            OnDinoPlacement?.Invoke();
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
        foreach (Button button in buttonList)
        {
            button.GetComponent<Outline>().enabled = false;
        }
    }

}
