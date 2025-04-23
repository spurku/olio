//extra
#pragma once
#include <string>
#include <vector>
#include "Student.h" 

using namespace std;

class Course {
private:
    string name;
    int credits;
    string courseCode; 
    string startDate;
    string endDate;
    vector<Student> enrolledStudents;  

public:
    Course();
    Course(string name, int credits, string courseCode, string startDate, string endDate);

    void setName(string name);
    void setCredits(int credits);
    void setCourseCode(string courseCode);
    void setStartDate(string startDate);
    void setEndDate(string endDate);

    string getName() const;
    int getCredits() const;
    string getCourseCode() const;
    string getStartDate() const;
    string getEndDate() const;

    void enrollStudent(const Student& student);  
    void printInfo() const;
};
