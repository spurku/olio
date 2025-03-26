#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person();
    Person(std::string n, int a);
    ~Person();

    void salute();
    void setAge(int newAge);
    int getAge();
    void setName(std::string newName);
    std::string getName();
};

#endif  
