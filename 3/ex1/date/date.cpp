#include "date.h"
#include <iostream>
#include <iomanip> 

using namespace std;

// Default constructor
Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

// Setters
void Date::setDay(int newDay) {
    day = newDay;
}

void Date::setMonth(int newMonth) {
    month = newMonth;
}

void Date::setYear(int newYear) {
    year = newYear;
}

// Getters
int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}

// Print functions
void Date::printDate() {
    cout << setw(2) << setfill('0') << day << "/" 
         << setw(2) << setfill('0') << month << "/"
         << year << endl;
}

void Date::printDate(string format) {
    if (format == "DD-MM-YYYY") {
        cout << setw(2) << setfill('0') << day << "-" 
             << setw(2) << setfill('0') << month << "-"
             << year << endl;
    } 
    else if (format == "YYYY/MM/DD") {
        cout << year << "/" 
             << setw(2) << setfill('0') << month << "/"
             << setw(2) << setfill('0') << day << endl;
    } 
    else {
        printDate();  
    }
}

void Date::askDate() {
    bool valid = false;
    while (!valid) {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;

        if (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth(month, year)) {
            valid = true;  // Valid date
        } else {
            cout << "Invalid date! Please try again." << endl;
        }
    }
}

void Date::addOneDay() {
    day++;

    if (day > daysInMonth(month, year)) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

bool Date::isLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int Date::daysInMonth(int month, int year) {
    const int daysInEachMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Leap year check for February
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }

    return daysInEachMonth[month - 1];
}
