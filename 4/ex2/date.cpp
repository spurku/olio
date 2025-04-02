#include "Date.h"

// Default constructor
Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

// Parameterized constructor
Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

// Getter methods
int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

// Setter methods
void Date::setDay(int d) {
    day = d;
}

void Date::setMonth(int m) {
    month = m;
}

void Date::setYear(int y) {
    year = y;
}

// Print the date
void Date::printDate() const {
    cout << day << "/" << month << "/" << year << endl;
}

// Ask for date input
void Date::askDate() {
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}
