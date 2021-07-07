using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementManager : MonoBehaviour
{
    public int width, height;
    Grid placementGrid;

    private Dictionary<Vector3Int, StructureModel> temporaryRoadobjects = new Dictionary<Vector3Int, StructureModel>();
    private Dictionary<Vector3Int, StructureModel> structureDictionary = new Dictionary<Vector3Int, StructureModel>();
    private Dictionary<Vector3Int, StructureModel> structureDictionaryCar = new Dictionary<Vector3Int, StructureModel>();

    private void Start()
    {
        placementGrid = new Grid(width, height);
    }

    internal CellType[] GetNeighbourTypesFor(Vector3Int position)
    {
        return placementGrid.GetAllAdjacentCellTypes(position.x, position.z);
    }

    internal bool CheckIfPositionInBound(Vector3Int posistion)
    {
        if (posistion.x >= 0 && posistion.x < width && posistion.z >= 0 && posistion.z < height)
        {
            return true;
        }
        return false;
    }

    internal void PlaceObjectOnTheMap(Vector3Int position, GameObject structurePrefab, CellType type, int width=1, int height = 1)
    {
        StructureModel structure = CreateANewStructureModel(position, structurePrefab, type);

        if(type == CellType.Cop || type == CellType.Car)
        {
            if(placementGrid[position.x, position.z] == CellType.Road)
            {
                if (structureDictionary[position].yRotation == 0 || structureDictionary[position].yRotation == 180)
                {
                    structure.SwapModel(structurePrefab, Quaternion.Euler(0, 90, 0));
                }

                placementGrid[position.x, position.z] = CellType.RoadWithCar;
                structureDictionaryCar.Add(position, structure);
            }
            else if(type == CellType.Cop)
            {
                placementGrid[position.x, position.z] = type;
                structureDictionaryCar.Add(position, structure);
                DestroyNatureAt(position);
            }
        }
        else
        {
            for (int x = 0; x < width; x++)
            {
                for (int z = 0; z < height; z++)
                {
                    var newPosition = position + new Vector3Int(x, 0, z);
                    placementGrid[newPosition.x, newPosition.z] = type;
                    structureDictionary.Add(newPosition, structure);
                    DestroyNatureAt(newPosition);
                }
            }
        }
    }

    private void DestroyNatureAt(Vector3Int position)
    {
        RaycastHit[] hits = Physics.BoxCastAll(position + new Vector3(0,0.5f,0),new Vector3(0.5f,0.5f, 0.5f), transform.up, Quaternion.identity, 1f, 1 << LayerMask.NameToLayer("Nature"));
        foreach (var item in hits)
        {
            Destroy(item.collider.gameObject);
        }
    }

    public void DestroyStructureAt(Vector3Int position)
    {
        if (!CheckIfPositionIsFree(position)) {
            List<Vector3Int> positions = new List<Vector3Int>();

            if(placementGrid[position.x, position.z] == CellType.Cop)
            {
                Destroy(structureDictionaryCar[position].gameObject);
                structureDictionaryCar.Remove(position);
                placementGrid[position.x, position.z] = CellType.Empty;
                return;
            }

            foreach (var item in structureDictionary)
            {
                if (item.Value.Equals(structureDictionary[position]))
                {
                    if(placementGrid[item.Key.x, item.Key.z] == CellType.RoadWithCar)
                    {
                        Destroy(structureDictionaryCar[position].gameObject);
                        structureDictionaryCar.Remove(position);
                        placementGrid[item.Key.x, item.Key.z] = CellType.Road;
                    }
                    else
                    {
                        placementGrid[item.Key.x, item.Key.z] = CellType.Empty;
                        Destroy(item.Value.gameObject);
                        positions.Add(item.Key);
                    }
                }   
            }

            foreach (var item in positions)
            {
                structureDictionary.Remove(item);
            }
            
        }
        
    }

    internal bool CheckIfPositionIsFree(Vector3Int posistion)
    {
        return CheckIfPositionIsOfType(posistion, CellType.Empty);
    }

    internal bool CheckIfPositionIsRoad(Vector3Int posistion)
    {
        return CheckIfPositionIsOfType(posistion, CellType.Road);
    }

    internal void PlaceTemporaryStructure(Vector3Int position, GameObject structurePrefab, CellType type)
    {
        placementGrid[position.x, position.z] = type;
        StructureModel structure = CreateANewStructureModel(position, structurePrefab, type);
        temporaryRoadobjects.Add(position, structure);
    }

    internal void RemoveAllTemporaryStructures()
    {
        foreach(var structure in temporaryRoadobjects.Values)
        {
            var position = Vector3Int.RoundToInt(structure.transform.position);
            placementGrid[position.x, position.z] = CellType.Empty;
            Destroy(structure.gameObject);
        }
        temporaryRoadobjects.Clear();
    }

    internal List<Vector3Int> GetNeighboursOfTypeFor(Vector3Int position, CellType type)
    {
        var neighbourVertices = placementGrid.GetAdjacentCellsOfType(position.x, position.z, type);
        List<Vector3Int> neighbours = new List<Vector3Int>();
        foreach(var point in neighbourVertices)
        {
            neighbours.Add(new Vector3Int(point.X, 0, point.Y));
        }
        return neighbours;
    }

    internal List<Vector3Int> GetPathBetween(Vector3Int startPosition, Vector3Int endPosition)
    {
        var resultPath = GridSearch.AStarSearch(placementGrid, new Point(startPosition.x, startPosition.z), new Point(endPosition.x, endPosition.z));
        List<Vector3Int> path = new List<Vector3Int>();
        foreach(Point point in resultPath)
        {
            path.Add(new Vector3Int(point.X, 0, point.Y));
        }
        return path;
    }

    internal bool CheckIfPositionIsOfType(Vector3Int posistion, CellType type)
    {
        return placementGrid[posistion.x, posistion.z] == type;
    }

    private StructureModel CreateANewStructureModel(Vector3Int position, GameObject structurePrefab, CellType type)
    {
        GameObject structure = new GameObject(type.ToString());
        structure.transform.SetParent(transform);
        structure.transform.localPosition = position;
        var structureModel = structure.AddComponent<StructureModel>();
        structureModel.CreateModel(structurePrefab);
        return structureModel;
    }

    internal void AddTemporaryStructuresToStructureDictionary()
    {
        foreach(var structure in temporaryRoadobjects)
        {
            structureDictionary.Add(structure.Key, structure.Value);
            DestroyNatureAt(structure.Key);
        }
        temporaryRoadobjects.Clear();
    }

    public void ModifyStructureModel(Vector3Int position, GameObject newModel, Quaternion rotation)
    {
        if (temporaryRoadobjects.ContainsKey(position))
        {
            temporaryRoadobjects[position].SwapModel(newModel, rotation);
        }
        else if(structureDictionary.ContainsKey(position))
        {
            structureDictionary[position].SwapModel(newModel, rotation);
        }
    }
}
