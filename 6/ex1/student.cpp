#include "Student.h"
#include <iostream>

Student::Student() : Person(), studentNumber("00000"), credits(0) {
    std::cout << "Student class default constructor called" << std::endl;
}

Student::Student(const Student& student)
    : Person(student),
      studentNumber(student.studentNumber),
      completedCourses(student.completedCourses),
      credits(student.credits) {
    std::cout << "Student class copy constructor called" << std::endl;
}

Student::Student(std::string name, int age, Address address, std::string studentNumber,
                 std::vector<std::string> completedCourses, int credits)
    : Person(name, age, address),
      studentNumber(studentNumber),
      completedCourses(completedCourses),
      credits(credits) {
    std::cout << "Student class parameterized constructor called" << std::endl;
}

Student::~Student() {
    std::cout << "Student class destructor called" << std::endl;
}

void Student::setStudentNumber(std::string studentNumber) {
    this->studentNumber = studentNumber;
}

void Student::setCompletedCourses(std::vector<std::string> completedCourses) {
    this->completedCourses = completedCourses;
}

void Student::setCredits(int credits) {
    this->credits = credits;
}

std::string Student::getStudentNumber() const {
    return studentNumber;
}

std::vector<std::string> Student::getCompletedCourses() const {
    return completedCourses;
}

int Student::getCredits() const {
    return credits;
}

void Student::printInfo() const {
    Person::printInfo();
    std::cout << "Student Number: " << studentNumber << std::endl;
    std::cout << "Completed Courses: ";
    for (const std::string& course : completedCourses) {
        std::cout << course << " ";
    }
    std::cout << "\nCredits: " << credits << std::endl;
}

void Student::addCourse(std::string course) {
    completedCourses.push_back(course);
}

void Student::removeCourse(std::string course) {
    for (auto it = completedCourses.begin(); it != completedCourses.end(); ++it) {
        if (*it == course) {
            completedCourses.erase(it);
            break;
        }
    }
}

void Student::addCredits(int credits) {
    this->credits += credits;
}

void Student::removeCredits(int credits) {
    if (this->credits >= credits)
        this->credits -= credits;
    else
        this->credits = 0;
}