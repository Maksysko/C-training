//
// Created by emyrmak on 7/9/2019.
//
#include <limits>
#include <vector>

class Graph {
private:
    const int infinity = std::numeric_limits<int>::max();
    int startVertex;
    int endVertex;
    const int size;
    int** matrix;

    bool* visited;
    int* distance;

    bool readStartEndVertex();

    void getShortestWay();

//    std::vector<std::vector<int>> way;
    std::string* way;
public:
    Graph(int& size_t, std::vector<std::vector<int>>& graph);
    ~Graph();

    void go();

    void print();

};



