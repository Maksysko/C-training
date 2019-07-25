//
// Created by emyrmak on 7/23/2019.
//

#include "Student.h"

Student::Student(int id, std::string name): id(id), name(name) {

}

int Student::getId() const {
    return id;
}

std::string Student::getFormatted() const {
    std::ostringstream formatted;
    formatted << getId() << " " << getName() << "\n";
    return formatted.str();
}

std::string Student::getName() const {
    return name;
}
