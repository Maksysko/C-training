//
// Created by emyrmak on 7/23/2019.
//

#include "Course.h"

Course::Course(int id, std::string name, int teacherId): id(id), name(name), teacherId(teacherId) {

}

int Course::getId() const {
    return id;
}

std::string Course::getFormatted() const {
    std::ostringstream formatted;
    formatted << getId()  << " " << name << " " << teacherId  << "\n";
    return formatted.str();
}
