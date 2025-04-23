#include "Teacher.h"
#include <iostream>
#include <vector>

using namespace std;

void Teacher::setCourse(string oldCourse, string newCourse) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses.at(i) == oldCourse) {
            courses.at(i) = newCourse;
        }
    }
}

string Teacher::getCourses() const {
    string coursesString = "";
    for (int i = 0; i < courses.size(); i++) {
        coursesString += courses.at(i) + "\n";
    }
    return coursesString;
}

void Teacher::printInfo() const {
    Person::printInfo();
    cout << "Field of expertise: " << fieldOfExpertise << "\n\nCourses:\n" << getCourses();
}

void Teacher::addCourse(string course) { courses.push_back(course); }

void Teacher::removeCourse(string course) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses.at(i) == course) {
            courses.erase(courses.begin() + i);
        }
    }
}

void Teacher::setFieldOfExpertise(string fieldOfExpertise) {
    this->fieldOfExpertise = fieldOfExpertise;
}

string Teacher::getFieldOfExpertise() const { return fieldOfExpertise; }

Teacher::Teacher() : Person(), fieldOfExpertise("Unknown") {
    cout << "Teacher class default constructor" << endl;
}

Teacher::Teacher(const Teacher& teacher)
    : Person(teacher), courses(teacher.courses),
      fieldOfExpertise(teacher.fieldOfExpertise) {
    cout << "Teacher class copy constructor" << endl;
}

Teacher::Teacher(string name, int age, Address address, string fieldOfExpertise)
    : Person(name, age, address), fieldOfExpertise(fieldOfExpertise) {
    cout << "Teacher class 4-parameter constructor" << endl;
}

Teacher::~Teacher() { cout << "Teacher class destructor called" << endl; }