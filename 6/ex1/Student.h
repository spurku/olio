#pragma once
#include "Person.h"
#include "Address.h"
#include <string>
#include <vector>

class Student : public Person {
public:
    void setStudentNumber(std::string studentNumber);
    void setCompletedCourses(std::vector<std::string> completedCourses);
    void setCredits(int credits);

    std::string getStudentNumber() const;
    std::vector<std::string> getCompletedCourses() const;
    int getCredits() const;

    void printInfo() const;
    void addCourse(std::string course);
    void removeCourse(std::string course);
    void addCredits(int credits);
    void removeCredits(int credits);

    Student();
    Student(const Student& student);
    Student(std::string name, int age, Address address, std::string studentNumber,
            std::vector<std::string> completedCourses, int credits);

    virtual ~Student();

private:
    std::string studentNumber;
    std::vector<std::string> completedCourses;
    int credits;
};