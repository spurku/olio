#include "person.h"

Person::Person() {
    cout << "Person class default constructor" << endl;
    name = "";
    age = 0;
}

Person::Person(string name, int age) {
    cout << "Person class parameterized constructor" << endl;
    this->name = name;
    this->age = age;
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

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

void Person::salute() {
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}

void Person::printPersonDetails() {
    cout << "Name: " << name << ", Age: " << age << endl;
}