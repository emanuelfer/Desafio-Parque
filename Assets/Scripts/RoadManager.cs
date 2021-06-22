using SVS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadManager : MonoBehaviour
{
    public PlacementManager placementManager;

    public List<Vector3Int> temporaryPlacementPositions = new List<Vector3Int>();
    public List<Vector3Int> roadPositionsToRecheck = new List<Vector3Int>();

    private Vector3Int startPosition;
    private bool placementNode = false;

    public RoadFixer roadFixer;

    public void Start()
    {
        roadFixer = GetComponent<RoadFixer>();
    }

    public void PlaceRoad(Vector3Int position)
    {
        if (placementManager.CheckIfPositionInBound(position) == false)
        {
            return;
        }
        if (placementManager.CheckIfPositionIsFree(position) == false)
        {
            return;
        }
        if(placementNode == false)
        {
            placementNode = true;
            startPosition = position;

            temporaryPlacementPositions.Clear();
            roadPositionsToRecheck.Clear();

            temporaryPlacementPositions.Add(position);
            placementManager.PlaceTemporaryStructure(position, roadFixer.deadEnd, CellType.Road);
        }
        else
        {
            placementManager.RemoveAllTemporaryStructures();
            temporaryPlacementPositions.Clear();

            foreach(var positionToFix in roadPositionsToRecheck)
            {
                roadFixer.FixRoadAtPosition(placementManager, positionToFix);
            }
            roadPositionsToRecheck.Clear();

            temporaryPlacementPositions = placementManager.GetPathBetween(startPosition, position);
            
            foreach(var temporaryPosition in temporaryPlacementPositions)
            {
                if (placementManager.CheckIfPositionIsFree(temporaryPosition) == false)
                {
                    continue;
                }
                placementManager.PlaceTemporaryStructure(temporaryPosition, roadFixer.deadEnd, CellType.Road);
            }
        }
        FixRoadPrefabs();

    }

    private void FixRoadPrefabs()
    {
        foreach (var temporaryPosition in temporaryPlacementPositions)
        {
            roadFixer.FixRoadAtPosition(placementManager, temporaryPosition);
            var neighbours = placementManager.GetNeighboursOfTypeFor(temporaryPosition, CellType.Road);
            foreach(var roadposition in neighbours)
            {
                if(roadPositionsToRecheck.Contains(roadposition) == false)
                {
                    roadPositionsToRecheck.Add(roadposition);
                } 
            }
        }
        foreach(var positionToFix in roadPositionsToRecheck)
        {
            roadFixer.FixRoadAtPosition(placementManager, positionToFix);
        }
    }

    public void FinishPlacingRoad()
    {
        placementNode = false;
        placementManager.AddTemporaryStructuresToStructureDictionary();
        if(temporaryPlacementPositions.Count > 0)
        {
            AudioPlayer.instance.PlayPlacementSound();
        }
        temporaryPlacementPositions.Clear();
        startPosition = Vector3Int.zero;
    }
}
