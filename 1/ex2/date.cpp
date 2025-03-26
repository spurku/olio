#include "date.h"
#include <iostream>

using namespace std;

void Date::setDate(int newDate) {
    date = newDate;
}

void Date::setMonth(int newMonth) {
    month = newMonth;
}

void Date::setYear(int newYear) {
    year = newYear;
}

int Date::getDate() {
    return date;
}

int Date::getMonth() { 
    return month;
}

int Date::getYear() {
    return year;
}

void Date::printDate() {
    cout << date << "/" << month << "/" << year << endl;
}

void Date::printDate(string format) {}

void Date::askDate() {
    cout << "Enter day: ";
    cin >> date;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}

void Date::addOneDay() {
    date++;
    if (date > 30) {  
        date = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}
