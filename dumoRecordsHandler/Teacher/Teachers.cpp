//
// Created by emyrmak on 7/24/2019.
//

#include "Teachers.h"

const int Teachers::idIndex = 0;
const int Teachers::nameIndex = 1;


void Teachers::addRecord(std::vector<std::string> &data) {
    records.emplace_back(std::stoi(data[idIndex]), data[nameIndex]);
}

Teachers::~Teachers() {
    std::cout << "Count of Teachers:" << records.size() << std::endl;
}

void Teachers::writeToFile(std::string pathToStore) {
    std::sort(records.begin(), records.end(), comparator<Teacher>);
    std::ofstream file(pathToStore);
    if (!file.is_open()){
        std::cerr << "Can not open file" << pathToStore << std::endl;
    } else {
        for(auto record : records){
            file << record.getFormatted();
        }
    }
}
