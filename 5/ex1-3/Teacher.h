#pragma once

#include "Person.h"
#include <string>
#include <vector>

using namespace std;

class Teacher : public Person {
public:
    void setCourse(string oldCourse, string newCourse);
    string getCourses() const;
    void printInfo() const;
    void addCourse(string course);
    void removeCourse(string course);
    void setFieldOfExpertise(string fieldOfExpertise);
    string getFieldOfExpertise() const;

    Teacher();
    Teacher(const Teacher& teacher);
    Teacher(string name, int age, Address address, string fieldOfExpertise);
    ~Teacher();

private:
    vector<string> courses;
    string fieldOfExpertise;
};