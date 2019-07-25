//
// Created by emyrmak on 7/23/2019.
//
#include "Exams.h"

const int Exams::idIndex = 0;
const int Exams::courseIndex = 1;
const int Exams::studentIndex = 2;
const int Exams::resultIndex = 3;

void Exams::addRecord(std::vector<std::string>& data) {
    records.emplace_back(std::stoi(data[idIndex]),
                       std::stoi(data[courseIndex]),
                       std::stoi(data[studentIndex]),
                       std::stoi(data[resultIndex]));
}

Exams::~Exams() {
    std::cout << "Count of exams: " << records.size() << std::endl;
}




void Exams::writeToFile(std::string pathToStore) {
    std::sort(records.begin(), records.end(), comparator<Exam>);
    std::ofstream file(pathToStore);
    if (!file.is_open()){
        std::cerr << "Can not open file" << pathToStore << std::endl;
    } else {
        for(auto record : records){
            file << record.getFormatted();
        }
    }
}



