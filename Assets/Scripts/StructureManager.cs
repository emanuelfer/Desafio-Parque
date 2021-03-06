using SVS;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class StructureManager : MonoBehaviour
{
    public StructurePrefabWeighted[] housePrefabs, specialPrefabs, bigStructuresPrefabs, peoplePrefabs, carPrefabs, copPrefabs;
    public PlacementManager placementManeger;

    private float[] houseWeights, specialWeights, bigStructuresWeights, peobleWeights, carWeights, copWeights;

    private void Start()
    {
        houseWeights = housePrefabs.Select(prefabStats => prefabStats.weight).ToArray();
        specialWeights = specialPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
        bigStructuresWeights = bigStructuresPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
        peobleWeights = peoplePrefabs.Select(prefabStats => prefabStats.weight).ToArray();
        carWeights = carPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
        copWeights = copPrefabs.Select(prefabStats => prefabStats.weight).ToArray();
    }

    internal void PlaceCar(Vector3Int position)
    {
        if (placementManeger.CheckIfPositionIsRoad(position))
        {
            int randomIndex = GetRandomWeightedIndex(carWeights);
            placementManeger.PlaceObjectOnTheMap(position, carPrefabs[randomIndex].prefab, CellType.Car);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }

    public void PlaceHouse(Vector3Int position)
    {
        if (ChekPoistionBeforePlacement(position))
        {
            int randomIndex = GetRandomWeightedIndex(houseWeights);
            placementManeger.PlaceObjectOnTheMap(position, housePrefabs[randomIndex].prefab, CellType.Structure);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }

    internal void DestroyStrucutre(Vector3Int position)
    {
        placementManeger.DestroyStructureAt(position);
    }

    internal void PlaceBigStructure(Vector3Int position)
    {
        int width = 2;
        int height = 2;
        if(CheckBigStructure(position, width, height))
        {
            int randomIndex = GetRandomWeightedIndex(bigStructuresWeights);
            placementManeger.PlaceObjectOnTheMap(position, bigStructuresPrefabs[randomIndex].prefab, CellType.BigStructure, width, height);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }

    private bool CheckBigStructure(Vector3Int position, int width, int height)
    {
        bool nearRoad = false;
        for (int x = 0; x < width; x++)
        {
            for (int z = 0; z < height; z++)
            {
                var newPosition = position + new Vector3Int(x, 0, z);
                if (DefaultCheck(newPosition) == false)
                {
                    return false;
                }
                if (nearRoad == false)
                {
                    nearRoad = RoadCheck(newPosition);
                }
            }
        }
        return nearRoad;
    }

    public void PlaceSpecial(Vector3Int position)
    {
        if (ChekPoistionBeforePlacement(position))
        {
            int randomIndex = GetRandomWeightedIndex(specialWeights);
            placementManeger.PlaceObjectOnTheMap(position, specialPrefabs[randomIndex].prefab, CellType.Structure);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }

    public void PlacePeople(Vector3Int position)
    {
        if (placementManeger.CheckIfPositionIsFree(position))
        {
            int randomIndex = GetRandomWeightedIndex(peobleWeights);
            placementManeger.PlaceObjectOnTheMap(position, peoplePrefabs[randomIndex].prefab, CellType.Structure);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }
    public void PlaceCop(Vector3Int position)
    {
        if (placementManeger.CheckIfPositionIsRoad(position) || placementManeger.CheckIfPositionIsFree(position))
        {
            int randomIndex = GetRandomWeightedIndex(copWeights);
            placementManeger.PlaceObjectOnTheMap(position, copPrefabs[randomIndex].prefab, CellType.Cop);
            AudioPlayer.instance.PlayPlacementSound();
        }
    }

    private int GetRandomWeightedIndex(float[] weights)
    {
        float sum = 0f;
        for (int i = 0; i < weights.Length; i++)
        {
            sum += weights[i];
        }

        float randomValue = UnityEngine.Random.Range(0,  sum);
        float tempSum = 0;
        for (int i = 0; i < weights.Length; i++)
        {
            if (randomValue >= tempSum && randomValue < tempSum +weights[i])
            {
                return i;
            }
            tempSum += weights[i];
        }
        return 0;
    }

    private bool ChekPoistionBeforePlacement(Vector3Int position)
    {
        if(DefaultCheck(position) == false)
        {
            return false;
        }

        if(RoadCheck(position) == false)
        {
            return false;
        }

        return true;
  
    }

    private bool RoadCheck(Vector3Int position)
    {
        if (placementManeger.GetNeighboursOfTypeFor(position, CellType.Road).Count <= 0 &&
            placementManeger.GetNeighboursOfTypeFor(position, CellType.RoadWithCar).Count <= 0)
        {
            Debug.Log("Must be place near a road!");
            return false;
        }

        return true;
    }

    private bool DefaultCheck(Vector3Int position)
    {
        if (placementManeger.CheckIfPositionInBound(position) == false)
        {
            Debug.Log("This position is out of bounds!");
            return false;
        }
        if (placementManeger.CheckIfPositionIsFree(position) == false)
        {
            Debug.Log("This position is not EMPTY!");
            return false;
        }
        return true;
    }
}



[Serializable]
public struct StructurePrefabWeighted
{
    public GameObject prefab;
    [Range(0,1)]
    public float weight;
}
