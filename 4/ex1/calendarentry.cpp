#include "CalendarEntry.h"

// Default constructor
CalendarEntry::CalendarEntry() {
    date = Date();  // Default to 1/1/2000
    subject = "Not defined";
    reminder = false;
}

// Parameterized constructor
CalendarEntry::CalendarEntry(const Date& d, const string& s, bool r) {
    date = d;
    subject = s;
    reminder = r;
}

// Copy constructor (Kopiorakentaja)
CalendarEntry::CalendarEntry(const CalendarEntry& other) {
    // Kopioidaan vain subject ja reminder
    subject = other.subject;
    reminder = other.reminder;

    // Kysytään uusi päivämäärä käyttäjältä
    cout << "Enter new date for the copied entry (day month year): ";
    int day, month, year;
    cin >> day >> month >> year;
    date = Date(day, month, year);  // Luo uusi päivämäärä
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

// Setter methods
void CalendarEntry::setDate(const Date& d) {
    date = d;
}

void CalendarEntry::setSubject(const string& s) {
    subject = s;
}

void CalendarEntry::setReminder(bool r) {
    reminder = r;
}

// Print the calendar entry details
void CalendarEntry::printEntry() const {
    cout << "Date: ";
    date.printDate();
    cout << "Subject: " << subject << endl;
    cout << "Reminder: " << (reminder ? "On" : "Off") << endl;
}

// Ask the user for calendar entry details
void CalendarEntry::askDetails() {
    cout << "Enter the calendar entry date: " << endl;
    date.askDate();  // Get the date from user

    cout << "Enter the subject of the entry: ";
    cin.ignore();  // Clear input buffer
    getline(cin, subject);

    // Ensure subject is not empty
    while (subject.empty()) {
        cout << "Subject cannot be empty. Please enter a valid subject: ";
        getline(cin, subject);
    }

    // Ask if the reminder is on
    char reminderChoice;
    do {
        cout << "Is the reminder on? (y/n): ";
        cin >> reminderChoice;
        reminderChoice = tolower(reminderChoice);
    } while (reminderChoice != 'y' && reminderChoice != 'n');

    reminder = (reminderChoice == 'y');
}