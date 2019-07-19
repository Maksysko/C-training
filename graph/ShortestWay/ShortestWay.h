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
    ~ShortestWay () = default;
    void findShortestWay(int startPoint, int endPoint);
    int getStartVertex() const;
    int getEndVertex() const;
    int getShortestDistance() const;
    intVector getShortestWay() const;
private:
    static const int maxInt = std::numeric_limits<int>::max();
    static const int startNodeIndex;
    static const int endNodeIndex;
    static const int pathWeightIndex;
    const std::size_t size;
    int startVertex, endVertex;
    Matrix matrix, way;
    intVector distance;
private:
    bool isWay(int currentVertex, int vertex) const;
    bool isWayShorter(int currentVertex, int vertex) const;
    void computeShortestWay();
    void createWay(int currentVertex, int vertex);
};



