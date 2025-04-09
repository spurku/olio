#include "Person.h"
#include "Address.h"
#include <iostream>

using namespace std;

void Person::setName(string name) { this->name = name; }

void Person::setAge(int age) { this->age = age; }

void Person::setAddress(Address address) { this->address = address; }

string Person::getName() const { return name; }

int Person::getAge() const { return age; }

Address Person::getAddress() const { return address; }

void Person::inputPerson() {
    string ageString;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    getline(cin, ageString);
    this->age = stoi(ageString);

    cout << "Enter address: ";
    address.inputAddress();
}

void Person::printInfo() const {
    cout << "Name: " << name << "\n\nAge: " << age << "\n\n";
    address.printAddress();
}

Person::Person(const Person& person)
    : name(person.name), age(person.age), address(person.address) {
    cout << "Person class copy constructor" << endl;
}

Person::Person(string name, int age) : name(name), age(age) {
    cout << "Person class 2-parameter constructor" << endl;
}

Person::Person(string name, int age, Address address)
    : name(name), age(age), address(address) {
    cout << "Person class 3-parameter constructor" << endl;
}

Person::Person() : name("Unknown"), age(0), address(Address()) {
    cout << "Person class default constructor" << endl;
}

Person::~Person() { cout << "Person class destructor called" << endl; }