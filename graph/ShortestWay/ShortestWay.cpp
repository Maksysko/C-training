//
// Created by emyrmak on 7/9/2019.
//
#include <string>
#include <iostream>
#include "ShortestWay.h"


ShortestWay::ShortestWay(Vertices& vertices) :
size(vertices.getUniqueVerticesCount()),
distance(size, maxInt),
matrix(size, intVector(size, 0)),
way(size, intVector())
{
    for (int i = 0; i < vertices.getSize(); ++i)
    {
        int startNode = vertices.getVertexData(i, startNodeIndex);
        int endNode = vertices.getVertexData(i, endNodeIndex);
        int pathWeight = vertices.getVertexData(i, pathWeightIndex);
        matrix[startNode][endNode] = pathWeight;
    }
}

const int ShortestWay::startNodeIndex = 0;
const int ShortestWay::endNodeIndex = 1;
const int ShortestWay::pathWeightIndex = 2;

void ShortestWay::findShortestWay(int startPoint, int endPoint)
{
    startVertex = startPoint;
    endVertex = endPoint;
    computeShortestWay();
}

void ShortestWay::computeShortestWay()
{
    boolVector visited(size, false);
    for (int i = 0; i < size; ++i)
    {
         distance[i] = maxInt;
         way[i].clear();
    }
     distance[startVertex] = 0;
     way[startVertex].push_back(startVertex) ;
     for (int vertex = 0; vertex < size - 1; ++vertex)
     {
         int minDistance = maxInt;
         int currentVertex = 0;
         for (int i = 0; i < size; ++i){
             if (!visited[i] && distance[i] < minDistance){
                 currentVertex = i;
                 minDistance = distance[i];
             }
         }
         visited[currentVertex] = true;
         for (int i = 0; i < size; ++i){
            if (!visited[i] && isWay(currentVertex, i) && isWayShorter(currentVertex, i))
            {
                distance[i] = distance[currentVertex] + matrix[currentVertex][i];
                createWay(currentVertex, i);
            }
         }
     }
}

void ShortestWay::createWay(int currentVertex, int vertex)
{
    way[vertex].clear();
    for (int i = 0; i < way[currentVertex].size(); ++i)
    {
        way[vertex].push_back(way[currentVertex][i]);
    }
    way[vertex].push_back(vertex);
}

bool ShortestWay::isWay(int currentVertex, int vertex) const
{
    return matrix[currentVertex][vertex] && distance[currentVertex]!= maxInt;
}

bool ShortestWay::isWayShorter(int currentVertex, int vertex) const
{
    return distance[currentVertex] + matrix[currentVertex][vertex] < distance[vertex];
}

int ShortestWay::getStartVertex() const {
    return startVertex;
}

int ShortestWay::getEndVertex() const {
    return endVertex;
}

int ShortestWay::getShortestDistance() const {
    return distance[endVertex];
}

intVector ShortestWay::getShortestWay() const {
    return way[endVertex];
}
