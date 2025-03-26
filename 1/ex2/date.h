#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int date;
    int month;
    int year;

public:
    void setDate(int newDate);
    void setMonth(int newMonth);
    void setYear(int newYear);

    int getDate();
    int getMonth();  
    int getYear();

    void printDate();
    void printDate(std::string format);
    void askDate();
    void addOneDay();
};

#endif  
