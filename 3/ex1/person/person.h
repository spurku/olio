#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    Person(); 
    Person(std::string name, int age);

    void setName(std::string name);
    void setAge(int age);

    std::string getName() const; 
    int getAge() const;          

    void printDetails() const;  

private:
    std::string name;
    int age;
};

#endif