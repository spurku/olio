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
    CalendarEntry();
    CalendarEntry(Date d, string s, bool r);
    ~CalendarEntry();

    Date getDate() const;
    string getSubject() const;
    bool getReminder() const;

    void setDate(const Date& d);  // const
    void setSubject(const string& s);  // const
    void setReminder(bool r);

    void printEntry() const;
    void askDetails();
};

#endif
