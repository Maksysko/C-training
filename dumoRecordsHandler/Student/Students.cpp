//
// Created by emyrmak on 7/24/2019.
//

#include "Students.h"

const int Students::idIndex = 0;
const int Students::nameIndex = 1;


void Students::addRecord(std::vector<std::string> &data) {
    records.emplace_back(std::stoi(data[idIndex]), data[nameIndex]);
}

Students::~Students() {
    std::cout << "Count of Students:" << records.size() << std::endl;
}

void Students::writeToFile(std::string pathToStore) {
    std::sort(records.begin(), records.end(), comparator<Student>);
    std::ofstream file(pathToStore);
    if (!file.is_open()){
        std::cerr << "Can not open file" << pathToStore << std::endl;
    } else {
        for(auto record : records){
            file << record.getFormatted();
        }
    }
}
