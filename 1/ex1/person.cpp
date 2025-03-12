#include "person.h"
#include <iostream>
#include <string>
using namespace std;

void Person::salute() {
    cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}

void Person::setAge(int newAge) {
    if (newAge >= 0) {
        age = newAge;
    }
}

int Person::getAge() {
    return age;
}

void Person::setName(string newName) {
    name = newName;
}

string Person::getName() {
    return name;
}