#include "person.h"
#include <iostream>

Person::Person() : name("Unnamed"), age(0) {} 

Person::Person(std::string n, int a) : name(n), age(a) {} 

Person::~Person() {
    std::cout << "Destructor called for " << name << std::endl;
}

void Person::salute() {
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
}

void Person::setAge(int newAge) {
    if (newAge >= 0) age = newAge;
}

int Person::getAge() {
    return age;
}

void Person::setName(std::string newName) {
    name = newName;
}

std::string Person::getName() {
    return name;
}
