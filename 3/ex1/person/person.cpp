#include "Person.h"
#include <iostream>

// Default const
Person::Person() : name(""), age(0) {}

Person::Person(std::string name, int age) : name(name), age(age) {}

Person::~Person() {
    std::cout << "Person class destructor for " << name << std::endl;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

std::string Person::getName() const {
    return name;
} 

int Person::getAge() const {
    return age;
}

void Person::printDetails() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

void Person::salute() const {
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
}
