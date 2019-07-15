//
// Created by emyrmak on 7/9/2019.
//
#include <string>
#include <iostream>
#include "Graph.h"


Graph::Graph(Vertices& vertices) :
size(vertices.getUniqueVerticesCount()),
visited(size, false),
distance(size, maxInt),
matrix(size, intVector(size, 0)),
way(size, intVector())
{
    for (int i = 0; i < vertices.getSize(); ++i)
    {
        int startNode = vertices.getVertexData(i, 0);
        int endNode = vertices.getVertexData(i, 1);
        int pathWeight = vertices.getVertexData(i, 2);
        matrix[startNode][endNode] = pathWeight;
    }
}

void Graph::go()
{
    if (readStartEndVertex())
    {
        getShortestWay();
    }
}

void Graph::getShortestWay()
{
    for (int i = 0; i < size; ++i)
    {
         visited[i] = false;
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
     std::cout << "The best way from " << startVertex << " to " << endVertex << " is: " << distance[endVertex] << " distance points" << std::endl << "Way is: ";
     printWay(endVertex);
     std::cout << std::endl;
}
bool Graph::readStartEndVertex()
{
    std::cout << "Enter start point:";
    std::cin >> startVertex;
    std::cout << "Enter end point:";
    std::cin >> endVertex;
    std::cout << std::endl;
    if (endVertex == startVertex){
        std::cout << "You are already here :)" << std::endl << std::endl;
        return false;
    }
    return true;
}

Graph::~Graph() {

}

void Graph::createWay(const int currentVertex, const int vertex)
{
    way[vertex].clear();
    for (int i = 0; i < way[currentVertex].size(); ++i)
    {
        way[vertex].push_back(way[currentVertex][i]);
    }
    way[vertex].push_back(vertex);
}

void Graph::printWay(const int vertex) const
{
    for (int i = 0; i < way[vertex].size(); ++i)
    {
        if (i < way[vertex].size() - 1)
        {
            std::cout << way[vertex][i] << " -> ";
        } else
        {
            std::cout << way[vertex][i] << std::endl;
        }
    }
}

bool Graph::isWay(const int currentVertex, const int vertex) const
{
    return matrix[currentVertex][vertex] && distance[currentVertex]!= maxInt;
}

bool Graph::isWayShorter(const int currentVertex, const int vertex) const
{
    return distance[currentVertex] + matrix[currentVertex][vertex] < distance[vertex];
}
