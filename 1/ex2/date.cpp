#include "date.h"
#include <iostream>

using namespace std;

class Date {
public:
    void setDate(int newDate);
    int getDate();
    void setMonth(int newMonth);
    int getMonth();
    void setYear(int newYear);
    int getYear();
    void printDate();
    void printDate(string format);
    void askDate();
    void addOneDay();
private:
    int date;
    int month;
    int year;
};

void Date::setDate(int newDate) {
    date = newDate;
}

int Date::getDate() {
    return date;
}

void Date::setMonth(int newMonth) {
    month = newMonth;
}

int Date::getMonth() {
    return month;
}

void Date::setYear(int newYear) {
    year = newYear;
}

int Date::getYear() {
    return year;
}

void Date::printDate() {
    cout << date << "/" << month << "/" << year << endl;
}

void Date::printDate(string format) {
}

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