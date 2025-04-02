#include <iostream>
#include "CalendarEntry.h"
#include "Date.h"

using namespace std;

int main() {
    // original CalendarEntry
    Date date(12, 4, 2024);  
    CalendarEntry entry1(date, "Meeting at 10 AM", true);
    
    cout << "Original Entry:" << endl;
    entry1.printEntry();

    // create a copy using the copy constructor
    CalendarEntry entry2 = entry1;  //copyu constructor
    
    cout << "\nCopied Entry:" << endl;
    entry2.printEntry();  // Näyttää uuden kopion tiedot

    return 0;
}
