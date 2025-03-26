#include <iostream>
#include "date.h"

using namespace std;

int main() {
    Date date1;
    date1.askDate();
    date1.printDate();

    date1.addOneDay();
    date1.printDate();

    return 0;
}
