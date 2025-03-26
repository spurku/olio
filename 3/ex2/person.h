#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "address.h"

using namespace std;

class Person {
private:
    string name;
    int age;
    Address address; 

public:
    Person();  
    Person(string name, int age); 
    Person(string name, int age, Address address); 

    void setName(string name);
    void setAge(int age);
    void setAddress(Address address); 

    string getName();
    int getAge();
    Address getAddress();

    void printDetails();
};

#endif
