//
// Created by emyrmak on 7/23/2019.
//
#include <fstream>
#include <sstream>
#include <iostream>
#include "dumpRecordsHandler.h"

std::string dumpRecordsHandler::typeExam = "E";
std::string dumpRecordsHandler::typeCourse = "C";
std::string dumpRecordsHandler::typeStudent = "S";
std::string dumpRecordsHandler::typeTeacher = "T";

void dumpRecordsHandler::readDataFromDumpFile(std::string& dumpFilePath) {
    std::string record;
    std::ifstream dumpFile(dumpFilePath);
    while(std::getline(dumpFile, record)){
        workOutRecord(record);
    }
}

IContainer* dumpRecordsHandler::getRecordObject(const std::string& recordType) {
    if (recordType == typeExam){
        return &exams;
    }
    if (recordType == typeCourse) {
        return &courses;
    }
    if (recordType == typeStudent) {
        return &students;
    }
    if (recordType == typeTeacher){
        return &teachers;
    }
    return nullptr;
}

void dumpRecordsHandler::workOutRecord(std::string &record) {
    std::string recordType;
    std::istringstream streamRecord(record);
    std::getline(streamRecord, recordType, ',');
    IContainer* recordsContainerObj = getRecordObject(recordType);
    std::vector<std::string> data = getRecordData(streamRecord);
    if (recordsContainerObj != nullptr)
    {
        recordsContainerObj->addRecord(data);
    } else {
        std::cerr << "NULL";
    }
}

std::vector<std::string> dumpRecordsHandler::getRecordData(std::istringstream &streamRecord) {
    std::string recordElement;
    std::vector<std::string> data;
    while (std::getline(streamRecord, recordElement, ',')){
        data.push_back(recordElement);
    }
    return data;
}

void dumpRecordsHandler::storeRecords() {
    exams.writeToFile("C:\\Users\\emyrmak\\Desktop\\git\\C-training\\dumpReader\\results\\E_res.txt");
    students.writeToFile("C:\\Users\\emyrmak\\Desktop\\git\\C-training\\dumpReader\\results\\S_res.txt");
    courses.writeToFile("C:\\Users\\emyrmak\\Desktop\\git\\C-training\\dumpReader\\results\\C_res.txt");
    teachers.writeToFile("C:\\Users\\emyrmak\\Desktop\\git\\C-training\\dumpReader\\results\\T_res.txt");
}



