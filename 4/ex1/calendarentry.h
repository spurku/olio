#ifndef CALENDARENTRY_H
#define CALENDARENTRY_H

#include <iostream>
#include <string>
#include "Date.h"  

using namespace std;

class CalendarEntry {
private:
    Date date;     
    string subject; 
    bool reminder; 

public:
    // Constructors
    CalendarEntry();
    CalendarEntry(const Date& d, const string& s, bool r);
    CalendarEntry(const CalendarEntry& other);  // Copy constructor

    // Destructor
    ~CalendarEntry();

    // Getters
    Date getDate() const;
    string getSubject() const;
    bool getReminder() const;

    // Setters
    void setDate(const Date& d);
    void setSubject(const string& s);
    void setReminder(bool r);

    // Methods
    void printEntry() const;
    void askDetails();
};

#endif
