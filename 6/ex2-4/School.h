#pragma once

#include <vector>
#include <string>
#include "Student.h"
#include "Teacher.h"

using namespace std;

class School {
private:
    string schoolName;
    vector<Student> students;
    vector<Teacher> teachers;

public:
    School();
    School(const string& name);

    void addStudent(const Student& student);
    void addTeacher(const Teacher& teacher);

    void printStudents() const;
    void printTeachers() const;
    void printAllInfo() const;

    void setSchoolName(const string& name);
    string getSchoolName() const;
    vector<Student> getStudents() const { return students; }
    vector<Teacher> getTeachers() const { return teachers; }   
};