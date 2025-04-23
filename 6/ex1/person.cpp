#include "Person.h"
#include <iostream>

Person::Person() : name("Unknown"), age(0), address() {}

Person::Person(std::string name, int age, Address address)
    : name(name), age(age), address(address) {}

Person::Person(const Person& other)
    : name(other.name), age(other.age), address(other.address) {}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setAddress(Address address) {
    this->address = address;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

Address Person::getAddress() const {
    return address;
}

void Person::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Address: ";
    address.printAddress();
}

Person::~Person() {}
