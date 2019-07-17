//
// Created by emyrmak on 7/15/2019.
//
#pragma once
#include <vector>
#include "Vertices.h"

void Vertices::addVertex(int startVertex, int endVertex, int weight) {
    vertices.emplace_back(std::vector<int>{startVertex, endVertex, weight});
    addUniqueVertex(startVertex);
    addUniqueVertex(endVertex);
}

int Vertices::getUniqueVerticesCount() const {
    return uniqueVertices.size();
}

void Vertices::addUniqueVertex(int vertex) {
    bool notInUniqueVertices = false;
    for (int uniqueVertex : uniqueVertices){
        if (uniqueVertex == vertex)
        {
            notInUniqueVertices = true;
            break;
        }
    }
    if (!notInUniqueVertices){
        uniqueVertices.push_back(vertex);
    }
}

int Vertices::getSize() const {
    return vertices.size();
}

int Vertices::getVertexData(int row, int col) const {
    return vertices[row][col];
}
