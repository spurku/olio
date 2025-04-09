#pragma once
#include "Person.h"
#include "Address.h"
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    Address address;

public:
    // Setters
    void setName(string name);
    void setAge(int age);
    void setAddress(Address address);

    // Getters
    string getName() const;
    int getAge() const;
    Address getAddress() const;

    // Input and output
    void inputPerson();
    void printInfo() const;

    // Constructors
    Person(); // Default constructor
    Person(string name, int age); // Two-parameter constructor
    Person(string name, int age, Address address); // Three-parameter constructor
    Person(const Person& person); // Copy constructor

    // Destructor
    ~Person();
};
