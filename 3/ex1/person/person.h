#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    Person(); 
    Person(std::string name, int age);
    ~Person();  // Destructor declaration

    void setName(std::string name);
    void setAge(int age);

    std::string getName() const; 
    int getAge() const;          

    void printDetails() const;  
    void salute() const;        

private:
    std::string name;
    int age;
};

#endif
