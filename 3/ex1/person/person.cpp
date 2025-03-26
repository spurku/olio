#include "Person.h"
#include <iostream>

using namespace std;

class Person {
private:
    string name;     int age;     

public:
    Person();
    Person(string name, int age);
    ~Person();

    void setName(string name);
    void setAge(int age);
    string getName() const;
    int getAge() const;
    void printPersonDetails() const;
    void salute() const; 
};

Person::Person() : name(""), age(0) {
    cout << "Person class default constructor" << endl;
}

Person::Person(string name, int age) : name(name), age(age) {
    cout << "Person class parameterized constructor" << endl;
}

Person::~Person() {
    cout << "Person class destructor for " << name << endl;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

string Person::getName() const { 
    return name;
}

int Person::getAge() const { 
    return age;
}

void Person::salute() const { 
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}

void Person::printPersonDetails() const { 
    cout << "Name: " << name << ", Age: " << age << endl;
}
