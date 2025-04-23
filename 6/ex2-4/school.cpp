#include "School.h"
#include <iostream>

using namespace std;

School::School() {
    // voit alustaa täällä jos haluat jotain
}

void School::setSchoolName(const string& name) {
    schoolName = name;
}

void School::addTeacher(const Teacher& teacher) {
    teachers.push_back(teacher);
}

void School::addStudent(const Student& student) {
    students.push_back(student);
}

void School::printTeachers() const {
    cout << "Teachers at " << schoolName << ":\n";
    for (const auto& teacher : teachers) {
        teacher.printInfo();
        cout << endl;
    }
}

void School::printStudents() const {
    cout << "Students at " << schoolName << ":\n";
    for (const auto& student : students) {
        student.printInfo();
        cout << endl;
    }
}

void School::printAllInfo() const {
    cout << "School name: " << schoolName << "\n\n";
    printTeachers();
    printStudents();
}
