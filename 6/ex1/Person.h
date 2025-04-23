#pragma once
#include "Address.h"
#include <string>

class Person {
public:
    Person();
    Person(std::string name, int age, Address address);
    Person(const Person& other);

    void setName(std::string name);
    void setAge(int age);
    void setAddress(Address address);

    std::string getName() const;
    int getAge() const;
    Address getAddress() const;

    virtual void printInfo() const;

    virtual ~Person();

protected:
    std::string name;
    int age;
    Address address;
};