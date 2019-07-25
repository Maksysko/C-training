//
// Created by emyrmak on 7/23/2019.
//

#include "Teacher.h"

Teacher::Teacher(int id, std::string name): id(id), name(name) {

}

int Teacher::getId() const {
    return id;
}

std::string Teacher::getFormatted() const {
    std::ostringstream formatted;
    formatted << getId() << " " << getName() << "\n";
    return formatted.str();
}

std::string Teacher::getName() const {
    return name;
}
