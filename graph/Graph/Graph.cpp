//
// Created by emyrmak on 7/9/2019.
//
#include <string>
#include <iostream>
#include "Graph.h"

Graph::Graph(int& size_t, std::vector<std::vector<int>>& graph) : size(size_t) {
    matrix = new int*[size];
    visited = new bool[size];
    distance = new int[size];
    way = new std::string[size];
    for (int i = 0; i < size; i++){
        matrix[i] = new int[size];
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < graph.size(); i++){
        matrix[graph[i][0]][graph[i][1]] = graph[i][2];
    }
}

void Graph::print() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void Graph::go() {
    if (readStartEndVertex()){
        getShortestWay();
    }
}

void Graph::getShortestWay(){

    for (int i = 0; i < size; i++){
         visited[i] = false;
         distance[i] = infinity;
         way[i] = "";
     }
     distance[startVertex] = 0;
     way[startVertex] = std::to_string(startVertex);
     for (int vertex = 0; vertex < size - 1; vertex++){
         int minDistance = infinity;
         int currentVertex = 0;
         for (int i = 0; i < size; i++){
             if (!visited[i] && distance[i] < minDistance){
                 currentVertex = i;
                 minDistance = distance[i];
             }
         }
         visited[currentVertex] = true;
         for (int i = 0; i < size; i++){
             if (!visited[i] && matrix[currentVertex][i] && distance[currentVertex]!= infinity &&
                 distance[currentVertex]+ matrix[currentVertex][i] < distance[i]) {
                 distance[i] = distance[currentVertex] + matrix[currentVertex][i];
                 way[i] = way[currentVertex] + " -> " + std::to_string(i);
            }
         }
     }
     std::cout << "The best way from " << startVertex << " to " << endVertex << " is: " << way[endVertex] << " with " << distance[endVertex] << " distance points" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
bool Graph::readStartEndVertex() {
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
    delete[] visited;
    delete[] distance;
    delete[] way;
    for (int i = 0; i < size; i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}

