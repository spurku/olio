#include <iostream>
#include <string>
#include "date.h"
#include "date.cpp"
using namespace std;

int main() {
    Date date1;
    date1.askDate();
    date1.printDate();

    date1.addOneDay();
    date1.printDate();

    return 0;
}