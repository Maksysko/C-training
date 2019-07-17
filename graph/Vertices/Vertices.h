//
// Created by emyrmak on 7/15/2019.
//

#pragma once
#include <vector>
using Matrix = std::vector<std::vector<int>>;

class Vertices {
public:
    void addVertex(int startVertex, int endVertex, int weight);
    int getUniqueVerticesCount() const;
    int getSize() const;
    int getVertexData(int row, int col) const;
private:
    void addUniqueVertex(int vertex);
    Matrix vertices;
    std::vector<int> uniqueVertices;
};


