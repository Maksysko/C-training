//
// Created by emyrmak on 7/15/2019.
//

#pragma once;
#include <vector>
using Matrix = std::vector<std::vector<int>>;

class Vertices {
public:
    void addVertex(const int startVertex, const int endVertex, const int weight);
    int getUniqueVerticesCount() const;
    int getSize() const;
    int getVertexData(const int row, const int col) const;
private:
    void addUniqueVertex(const int vertex);
    Matrix vertices;
    std::vector<int> uniqueVertices;
};


