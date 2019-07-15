//
// Created by emyrmak on 7/15/2019.
//
#pragma once;
#include "Vertices.h"

void Vertices::addVertex(const int startVertex, const int endVertex, const int weight) {
    vertices.push_back({startVertex, endVertex, weight});
    addUniqueVertex(startVertex);
    addUniqueVertex(endVertex);
}

int Vertices::getUniqueVerticesCount() const {
    return uniqueVertices.size();
}

void Vertices::addUniqueVertex(const int vertex) {
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

int Vertices::getVertexData(const int row, const int col) const {
    return vertices[row][col];
}
