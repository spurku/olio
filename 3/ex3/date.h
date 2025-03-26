#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructors
    Date();  // Default constructor
    Date(int d, int m, int y);  // Parameterized constructor

    // Getter methods
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Setter methods
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    // Method to print the date in "DD/MM/YYYY" format
    void printDate() const;

    // Method to ask the user for a date input
    void askDate();
};

#endif
