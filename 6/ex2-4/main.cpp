#include <iostream>
#include <string>
#include <vector>
#include "School.h"
#include "Teacher.h"
#include "Student.h"
#include "Address.h"
#include "Person.h"
using namespace std;

int main() {
    string schoolName;
    cout << "Enter the name of the school: ";
    getline(cin, schoolName);

    School school;
    school.setSchoolName(schoolName);

    int choice;
    do {
        cout << "\n---- MENU ----\n";
        cout << "1. Add Teacher\n";
        cout << "2. Add Course to Teacher\n";
        cout << "3. Add Student\n";
        cout << "4. Add Course to Student\n";
        cout << "5. Print Teachers\n";
        cout << "6. Print Students\n";
        cout << "7. Print School Information\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;
        cin.ignore(); // to clear input buffer

        if (choice == 1) {
            string name, street, city, fieldOfExpertise;
            int age, postalCode;

            cout << "Enter teacher's name: ";
            getline(cin, name);
            cout << "Enter teacher's age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter street address: ";
            getline(cin, street);
            cout << "Enter postal code: ";
            cin >> postalCode;
            cin.ignore();
            cout << "Enter city: ";
            getline(cin, city);
            cout << "Enter field of expertise: ";
            getline(cin, fieldOfExpertise);

            Address address(street, postalCode, city);
            Teacher teacher(name, age, address, fieldOfExpertise);
            school.addTeacher(teacher);

        } else if (choice == 2) {
            if (school.getTeachers().empty()) {
                cout << "No teachers available.\n";
                continue;
            }

            cout << "Select a teacher (index starting from 0):\n";
            for (int i = 0; i < school.getTeachers().size(); ++i) {
                cout << i << ": " << school.getTeachers()[i].getName() << endl;
            }

            int index;
            cin >> index;
            cin.ignore();

            if (index >= 0 && index < school.getTeachers().size()) {
                string course;
                cout << "Enter course name: ";
                getline(cin, course);
                school.getTeachers()[index].addCourse(course);
            } else {
                cout << "Invalid index.\n";
            }

        } else if (choice == 3) {
            string name, street, city, studentNumber;
            int age, postalCode;

            cout << "Enter student's name: ";
            getline(cin, name);
            cout << "Enter student's age: ";
            cin >> age;
            cin.ignore();
            cout << "Enter street address: ";
            getline(cin, street);
            cout << "Enter postal code: ";
            cin >> postalCode;
            cin.ignore();
            cout << "Enter city: ";
            getline(cin, city);
            cout << "Enter student number: ";
            getline(cin, studentNumber);

            Address address(street, postalCode, city);
            Student student(name, age, address, studentNumber, {}, 0);
            school.addStudent(student);

        } else if (choice == 4) {
            if (school.getStudents().empty()) {
                cout << "No students available.\n";
                continue;
            }

            cout << "Select a student (index starting from 0):\n";
            for (int i = 0; i < school.getStudents().size(); ++i) {
                cout << i << ": " << school.getStudents()[i].getName() << endl;
            }

            int index;
            cin >> index;
            cin.ignore();

            if (index >= 0 && index < school.getStudents().size()) {
                string course;
                cout << "Enter course name: ";
                getline(cin, course);
                school.getStudents()[index].addCourse(course);
            } else {
                cout << "Invalid index.\n";
            }

        } else if (choice == 5) {
            school.printTeachers();

        } else if (choice == 6) {
            school.printStudents();

        } else if (choice == 7) {
            school.printAllInfo();
        }

    } while (choice != 0);

    cout << "Program ended.\n";
    return 0;
}