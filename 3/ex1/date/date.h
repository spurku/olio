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
    Date(); 

    // Setters
    void setDay(int newDay);
    void setMonth(int newMonth);
    void setYear(int newYear);

    // Getters
    int getDay();
    int getMonth();  
    int getYear();

    // Print functions
    void printDate();  
    void printDate(string format);  

    // Other
    void askDate();
    void addOneDay();

private:
    bool isLeapYear(int year); 
    int daysInMonth(int month, int year);  
};

#endif
