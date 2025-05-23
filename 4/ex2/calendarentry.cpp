#include "CalendarEntry.h"

// Default constructor
CalendarEntry::CalendarEntry() {
    date = Date(); 
    subject = "Not defined";
    reminder = false;
}

// Parameterized constructor
CalendarEntry::CalendarEntry(Date d, string s, bool r) {
    date = d;
    subject = s;
    reminder = r;
}

// Destructor
CalendarEntry::~CalendarEntry() {
    cout << "Calendar entry deleted." << endl;
}

// Getter methods
Date CalendarEntry::getDate() const {
    return date;
}

string CalendarEntry::getSubject() const {
    return subject;
}

bool CalendarEntry::getReminder() const {
    return reminder;
}

// Setter methods (const-viite)
void CalendarEntry::setDate(const Date& d) {
    date = d;  
}

void CalendarEntry::setSubject(const string& s) {
    subject = s;  
}

void CalendarEntry::setReminder(bool r) {
    reminder = r;
}

// Print the calendar entry
void CalendarEntry::printEntry() const {
    cout << "Date: ";
    date.printDate();
    cout << "Subject: " << subject << endl;
    cout << "Reminder: " << (reminder ? "On" : "Off") << endl;
}

// Ask the user for calendar entry details
void CalendarEntry::askDetails() {
    cout << "Enter the calendar entry date: " << endl;
    date.askDate();
    cout << "Enter the subject of the entry: ";
    cin.ignore(); // Clears the input buffer 
    getline(cin, subject);
    char reminderChoice;
    cout << "Is the reminder on? (y/n): ";
    cin >> reminderChoice;
    reminder = (reminderChoice == 'y' || reminderChoice == 'Y');
}
