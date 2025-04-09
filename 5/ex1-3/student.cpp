#include "Student.h"
#include "Person.h"  // Include Person here, not in the header
#include "Address.h" // Include Address here, not in the header
#include <iostream>

Student::Student() : Person(), studentNumber("00000"), credits(0) {
    cout << "Student class default constructor called" << endl;
}

Student::Student(const Student& student)
    : Person(student), studentNumber(student.studentNumber),
      completedCourses(student.completedCourses), credits(student.credits) {
    cout << "Student class copy constructor called" << endl;
}

Student::Student(string name, int age, Address address, string studentNumber,
                 vector<string> completedCourses, int credits)
    : Person(name, age, address), studentNumber(studentNumber),
      completedCourses(completedCourses), credits(credits) {
    cout << "Student class parameterized constructor called" << endl;
}

Student::~Student() {
    cout << "Student class destructor called" << endl;
}

void Student::setStudentNumber(string studentNumber) { this->studentNumber = studentNumber; }

void Student::setCompletedCourses(vector<string> completedCourses) {
    this->completedCourses = completedCourses;
}

void Student::setCredits(int credits) { this->credits = credits; }

string Student::getStudentNumber() const { return studentNumber; }

vector<string> Student::getCompletedCourses() const { return completedCourses; }

int Student::getCredits() const { return credits; }

void Student::printInfo() const {
    Person::printInfo();  
    cout << "Student Number: " << studentNumber << endl;
    cout << "Completed Courses: ";
    for (const string& course : completedCourses) {
        cout << course << " ";
    }
    cout << "\nCredits: " << credits << endl;
}

void Student::addCourse(string course) { completedCourses.push_back(course); }

void Student::removeCourse(string course) {
    for (auto it = completedCourses.begin(); it != completedCourses.end(); ++it) {
        if (*it == course) {
            completedCourses.erase(it);
            break;
        }
    }
}

void Student::addCredits(int credits) { this->credits += credits; }

void Student::removeCredits(int credits) { this->credits -= credits; }
