using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public Action OnRoadPlacement, OnHousePlacement, OnSpecialPlacement, OnBigStructurePlacement, OnRemoveStructure;
    public Button placeRoadButton, placeHouseButton, placeSpecialButton, placeBigStructureButton, buildBtn, insertBtn, removeBtn;

    public Action OnCarPlacement, OnCopPlacement, OnSecurityPlacement;
    public Button placeCarButton, placeCopPlacement, placeSecurityButton, endGameButton;

    public GameObject menu;
    public GameObject buildMenu;
    public GameObject insertMenu;
    public GameObject gameOver;

    public Canvas canvas;

    public Color outlineColor;
    List<Button> buttonList;
    List<Button> buttonMenuList;

    private void Start()
    {
        buttonList = new List<Button> { placeHouseButton, placeRoadButton, placeSpecialButton, placeBigStructureButton, placeCarButton,
            placeCopPlacement, placeSecurityButton};

        buttonMenuList = new List<Button> { buildBtn, insertBtn, removeBtn };

        placeRoadButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeRoadButton);
            OnRoadPlacement?.Invoke();
        });

        placeHouseButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeHouseButton);
            OnHousePlacement?.Invoke();
        });

        placeSpecialButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeSpecialButton);
            OnSpecialPlacement?.Invoke();
        });

        placeBigStructureButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeBigStructureButton);
            OnBigStructurePlacement?.Invoke();
        });

        placeCarButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeCarButton);
            OnCarPlacement?.Invoke();
        });

        placeCopPlacement.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeCopPlacement);
            OnCopPlacement?.Invoke();
        });

        placeSecurityButton.onClick.AddListener(() =>
        {
            ResetButtonColor(buttonList);
            ModifyOutline(placeSecurityButton);
            OnSecurityPlacement?.Invoke();
        });

        removeBtn.onClick.AddListener(() =>
        {
            insertMenu.SetActive(false);
            buildMenu.SetActive(false);
            ResetButtonColor(buttonMenuList);
            ModifyOutline(removeBtn);
            OnRemoveStructure?.Invoke();
        });

        buildBtn.onClick.AddListener(() =>
        {
            if(buildMenu.activeSelf == true)
            {
                ResetButtonColor(buttonMenuList);
                buildMenu.SetActive(false);

            }
            else
            {
                ResetButtonColor(buttonMenuList);
                ModifyOutline(buildBtn);
                insertMenu.SetActive(false);
                buildMenu.SetActive(true);
            }
        });

        insertBtn.onClick.AddListener(() =>
        {
            if (insertMenu.activeSelf == true)
            {
                ResetButtonColor(buttonMenuList);
                insertMenu.SetActive(false);
            }
            else
            {
                ResetButtonColor(buttonMenuList);
                ModifyOutline(insertBtn);
                insertMenu.SetActive(true);
                buildMenu.SetActive(false);
            } 
        });

        endGameButton.onClick.AddListener(() =>
         {
             insertMenu.SetActive(false);
             buildMenu.SetActive(false);
             StartCoroutine(SendImagetophp());
         });
    }

    IEnumerator SendImagetophp()
    {
        //Path to PHP
        string screenShotURL = "https://lidermil.com/lider/dashboard/desafios/Disney/screen_capture.php";
        

        //Wait until frame ends
        yield return new WaitForEndOfFrame();

        // Create a texture the size of the screen, RGB24 format
        int width = Screen.width;
        int height = Screen.height;
        Texture2D tex = new Texture2D(width, height, TextureFormat.RGB24, false);

        // Read screen contents into the texture        
        tex.ReadPixels(new Rect(0, 0, width, height), 0, 0, false);
        tex.Apply();


        // Encode texture into PNG
        byte[] bytes = tex.EncodeToPNG();
        Destroy(tex);

        // Create a Web Form
        WWWForm form = new WWWForm();
        form.AddField("frameCount", Time.frameCount.ToString());
        form.AddField("pontuacao", GameManager.pontuacao);
        form.AddBinaryData("file", bytes, "parque.png", "multipart/form-data");//"image/png"

        // Post WWWForm to path
        UnityWebRequest www = UnityWebRequest.Post(screenShotURL, form);
        yield return www.SendWebRequest();
        Debug.Log(www.downloadHandler.text);
        //Debug
        if (!(www.result == UnityWebRequest.Result.Success))
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("Image Uploaded!");
            gameOver.SetActive(true);
        }
    }

    private void ModifyOutline(Button button)
    {
        var outline = button.GetComponent<Outline>();
        outline.effectColor = outlineColor;
        outline.enabled = true;
    }

    private void ResetButtonColor(List<Button> buttonList)
    {
        foreach(Button button in buttonList)
        {
            button.GetComponent<Outline>().enabled = false;
        }
    }
}
