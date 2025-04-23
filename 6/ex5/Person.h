#pragma once
#include "Address.h"
#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    Person();
    Person(string name, int age);
    Person(string name, int age, Address address);
    Person(const Person& person);
    virtual ~Person();

    void setName(string name);
    void setAge(int age);
    void setAddress(Address address);

    string getName() const;
    int getAge() const;
    Address getAddress() const;

    void inputPerson();

    virtual void printInfo() const;  
private:
    string name;
    int age;
    Address address;
};
