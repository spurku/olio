#include "person.h"

Person::Person() : name(""), age(0) {}

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

Person::Person(string name, int age, Address address) {
    this->name = name;
    this->age = age;
    this->address = address;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setAddress(Address address) { 
    this->address = address;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

Address Person::getAddress() {
    return address;
}

void Person::printDetails() {
    cout << "Name: " << name << ", Age: " << age << " years" << endl;
    cout << "Address: ";
    address.printDetails();
}
