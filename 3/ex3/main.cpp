#include <iostream>
#include "CalendarEntry.h"  
#include "Date.h"            

using namespace std;

int main() {

    cout << "Default constructor test:" << endl;
    CalendarEntry entry1;
    entry1.printEntry();
    cout << endl;

    cout << "Parameterized constructor test:" << endl;
    Date d(15, 4, 2024); 
    CalendarEntry entry2(d, "Meeting at 10 AM", true);
    entry2.printEntry();
    cout << endl;

    cout << "User input calendar entry:" << endl;
    CalendarEntry entry3;
    entry3.askDetails();
    cout << endl;
    entry3.printEntry();

    return 0;
}