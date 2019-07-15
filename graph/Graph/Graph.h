//
// Created by emyrmak on 7/9/2019.
//
#pragma once;
#include <limits>
#include <vector>
#include "Vertices.h";

using Matrix = std::vector<std::vector<int>>;
using intVector = std::vector<int>;
using boolVector = std::vector<bool>;

class Graph {
public:
    Graph(Vertices& vertices);
    ~Graph();
    void go();
private:
    const int maxInt = std::numeric_limits<int>::max();
    const int size;
    int startVertex, endVertex;
    Matrix matrix, way;
    boolVector visited;
    intVector distance;
    bool isWay(const int currentVertex, const int vertex) const;
    bool isWayShorter(const int currentVertex, const int vertex) const;
    bool readStartEndVertex();
    void getShortestWay();
    void createWay(const int currentVertex, const int vertex);
    void printWay(const int vertex) const;
};



