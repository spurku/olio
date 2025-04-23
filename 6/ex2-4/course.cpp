//extra
#include "Course.h"
#include <iostream>

using namespace std;

Course::Course() : name("Unknown"), credits(0), courseCode("0000"), startDate("Unknown"), endDate("Unknown") {}

Course::Course(string name, int credits, string courseCode, string startDate, string endDate)
    : name(name), credits(credits), courseCode(courseCode), startDate(startDate), endDate(endDate) {}

void Course::setName(string name) { this->name = name; }
void Course::setCredits(int credits) { this->credits = credits; }
void Course::setCourseCode(string courseCode) { this->courseCode = courseCode; }
void Course::setStartDate(string startDate) { this->startDate = startDate; }
void Course::setEndDate(string endDate) { this->endDate = endDate; }

string Course::getName() const { return name; }
int Course::getCredits() const { return credits; }
string Course::getCourseCode() const { return courseCode; }
string Course::getStartDate() const { return startDate; }
string Course::getEndDate() const { return endDate; }

void Course::enrollStudent(const Student& student) {
    enrolledStudents.push_back(student);
}

void Course::printInfo() const {
    cout << "Course Name: " << name << endl;
    cout << "Credits: " << credits << endl;
    cout << "Course Code: " << courseCode << endl;
    cout << "Start Date: " << startDate << endl;
    cout << "End Date: " << endDate << endl;
    cout << "Enrolled Students: " << enrolledStudents.size() << endl;
}