#pragma once
#include "Person.h"
#include "Address.h"

class Person;
class Address;

#include <string>
#include <vector>

using namespace std;

class Student : public Person {
public:
    void setStudentNumber(string studentNumber);
    void setCompletedCourses(vector<string> completedCourses);
    void setCredits(int credits);

    string getStudentNumber() const;
    vector<string> getCompletedCourses() const;
    int getCredits() const;

    void printInfo() const;
    void addCourse(string course);
    void removeCourse(string course);
    void addCredits(int credits);
    void removeCredits(int credits);

    Student();
    Student(const Student& student);
    Student(string name, int age, Address address, string studentNumber,
            vector<string> completedCourses, int credits);

    virtual ~Student();

private:
    string studentNumber;
    vector<string> completedCourses;
    int credits;
};
