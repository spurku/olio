#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person {
public:
    Person(); 
    Person(string name, int age); 
    ~Person(); 
    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();
    void salute();
    void printPersonDetails();

private:
    string name;
    int age;
};

#endif