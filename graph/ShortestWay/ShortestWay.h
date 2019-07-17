//
// Created by emyrmak on 7/9/2019.
//
#pragma once
#include <limits>
#include <vector>
#include "Vertices.h"

using Matrix = std::vector<std::vector<int>>;
using intVector = std::vector<int>;
using boolVector = std::vector<bool>;

class ShortestWay  {
public:
    ShortestWay (Vertices& vertices);
    ~ShortestWay ();
    void findShortestWay(int startPoint, int endPoint);
private:
    const int maxInt = std::numeric_limits<int>::max();
    const std::size_t size;
    const int startNodeIndex;
    const int endNodeIndex;
    const int pathWeightIndex;
    int startVertex, endVertex;
    Matrix matrix, way;
    boolVector visited;
    intVector distance;
    bool isWay(int currentVertex, int vertex) const;
    bool isWayShorter(int currentVertex, int vertex) const;
    void computeShortestWay();
    void createWay(int currentVertex, int vertex);
    void printWay() const;
};



