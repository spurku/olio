#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<Person*> persons;

    // Create and add Person objects
    persons.push_back(new Person());
    persons.push_back(new Person("Matti", 25));
    persons.push_back(new Person(*persons.at(1)));

    // Create and add Student objects
    persons.push_back(new Student());
    persons.push_back(new Student(
        "Teppo", 30, Address("Street 1", "00100", "Helsinki"),
        "12345", vector<string>{"Course1", "Course2"}, 10));
    persons.push_back(new Student(*static_cast<Student*>(persons.back())));

    // Create and add Teacher objects
    persons.push_back(new Teacher());
    persons.push_back(new Teacher(
        "Laura", 35, Address("Street 2", "00200", "Helsinki"), "Education"));
    persons.push_back(new Teacher(*static_cast<Teacher*>(persons.back())));

    // Print information about all objects
    for (Person* person : persons) {
        person->printInfo(); // Make sure all derived classes override this
    }

    // Clean up memory
    for (Person* person : persons) {
        delete person;
    }

    return 0;
}
