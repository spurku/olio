#include <iostream>
#include "CalendarEntry.h"
#include "Date.h"

using namespace std;

void doSomethingByValue(CalendarEntry aCalendarEntry) {
    cout << "Do something with Calendar Entry (value parameter):" << endl;
    aCalendarEntry.printEntry();  // Copies the object's data and prints it
}

void doSomethingByReference(CalendarEntry& aCalendarEntry) {
    cout << "Do something with Calendar Entry (reference parameter):" << endl;
    aCalendarEntry.printEntry();  // Modifies the original object directly
}

void doSomethingByConstReference(const CalendarEntry& aCalendarEntry) {
    cout << "Do something with Calendar Entry (const reference parameter):" << endl;
    aCalendarEntry.printEntry();  // You can only call const methods
}

int main() {
    // Create a calendar entry with a specific date
    Date date(12, 4, 2024);  
    CalendarEntry entry(date, "Meeting at 10 AM", true);

    doSomethingByValue(entry);

    doSomethingByReference(entry);

    // Show that original object may have been modified
    cout << "\nAfter reference parameter function call:" << endl;
    entry.printEntry();

    // Pass the object by const reference 
    doSomethingByConstReference(entry);

    return 0;
}
