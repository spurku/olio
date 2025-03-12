
#include "person.h"

Person::Person() {
    name = "Unknown";
    age = 0;
}

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
}

Person::~Person() {  
    std::cout << "Person " << name << " is being destroyed." << std::endl;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

std::string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

void Person::salute() {
    std::cout << "Hello, my name is " << name << "!" << std::endl;
}

void Person::printPersonDetails() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
