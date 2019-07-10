#include "Graph/Graph.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>


int getGraphData(const std::string& path, std::vector<std::vector<int>>& vector);

int main() {

    std::vector<std::vector<int>> graphVertex;
    int vertexCount = getGraphData("C:\\Users\\emyrmak\\Desktop\\git\\C-training\\graph\\graph.txt", graphVertex);

    Graph graph(vertexCount, graphVertex);
    char q = ' ';
    while (q!='q'){
        graph.go();
        std::cout << "Type q to exit. Type any other to continue..." << std::endl;
        std::cin >> q;
    }
    return 0;
}


int getGraphData(const std::string& path, std::vector<std::vector<int>>& graphVertex){
    std::vector<int> node;
    std::vector<int> vertex;
    std::ifstream graph(path);
    int x, y, weight, vertexCount;
    if (!graph){
        exit(1);
    }
    while (graph >> x >> y >> weight){
        node = {x, y, weight};
        graphVertex.push_back(node);
        vertex.push_back(x);
        vertex.push_back(y);
    }
    sort(vertex.begin(), vertex.end());
    vertexCount = std::distance(vertex.begin(), std::unique(vertex.begin(), vertex.end()));
    return vertexCount;
}