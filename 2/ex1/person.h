#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
    Person();
    Person(string n, int a);
    ~Person();

    void printPersonDetails();
    void salute();
    void setAge(int newAge);
    int getAge();
    void setName(string newName);
    string getName();
};

#endif