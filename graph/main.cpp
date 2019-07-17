#include "ShortestWay.h"
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
    int startPoint, endPoint;
    getGraphData(pathToFile, vertices);
    ShortestWay shortestWay(vertices);
    char q = ' ';
    while (q!='q'){
        std::cout << "Enter start point:";
        std::cin >> startPoint;
        std::cout << "Enter end point:";
        std::cin >> endPoint;
        std::cout << std::endl;
        if (startPoint == endPoint){
            std::cout << "You are already here :)" << std::endl << std::endl;
        }
        else {
            shortestWay.findShortestWay(startPoint, endPoint);
        }
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