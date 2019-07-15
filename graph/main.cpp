#include "Graph.h"
#include "Vertices.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

void getGraphData(const std::string& path, Vertices& vertices);

int main() {
    const std::string pathToFile =  "C:\\Users\\emyrmak\\Desktop\\git\\C-training\\graph\\graph.txt";
    Vertices vertices;
    getGraphData(pathToFile, vertices);
    Graph graph(vertices);
    char q = ' ';
    while (q!='q'){
        graph.go();
        std::cout << "Type q to exit. Type any other to continue..." << std::endl;
        std::cin >> q;
    }
    return 0;
}

void getGraphData(const std::string& path, Vertices& vertices){
    std::ifstream graph(path);
    int x, y, weight;
    if (!graph){
        exit(1);
    }
    while (graph >> x >> y >> weight){
        vertices.addVertex(x, y, weight);
    }
}