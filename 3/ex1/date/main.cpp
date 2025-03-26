#include "date.h"

int main() {
    Date date1;

    date1.askDate();

    
    date1.printDate();

    date1.printDate("DD-MM-YYYY");
    date1.printDate("YYYY/MM/DD");

    date1.addOneDay();
    date1.printDate();

    return 0;
}
