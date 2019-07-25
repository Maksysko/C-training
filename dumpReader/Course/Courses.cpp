//
// Created by emyrmak on 7/23/2019.
//
#include "Courses.h"

const int Courses::idIndex = 0;
const int Courses::nameIndex = 1;
const int Courses::teacherIdIndex = 2;

void Courses::addRecord(std::vector<std::string>& data) {
    records.emplace_back(std::stoi(data[idIndex]), data[nameIndex], std::stoi(data[teacherIdIndex]));
}

Courses::~Courses() {
    std::cout << "Count of courses: " << records.size() << std::endl;
}

void Courses::writeToFile(std::string pathToStore) {
    std::sort(records.begin(), records.end(), comparator<Course>);
    std::ofstream file(pathToStore);
    if (!file.is_open()){
        std::cerr << "Can not open file" << pathToStore << std::endl;
    } else {
        for(auto record : records){
            file << record.getFormatted();
        }
    }
}
