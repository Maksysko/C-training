//
// Created by emyrmak on 7/23/2019.
//

#include "Exam.h"

Exam::Exam(int id, int courseId, int studentId, int result): id(id), courseId(courseId), studentId(studentId), result(result) {

}

int Exam::getId() const {
    return id;
}

std::string Exam::getFormatted() const {
    std::ostringstream formatted;
    formatted << getId() << " " << courseId << " " << studentId << " " << result << "\n";
    return formatted.str();
}


