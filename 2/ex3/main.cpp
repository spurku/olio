#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "noppa.h"

using namespace std;

int main () {

    setlocale(LC_ALL, "fi_FI");

    srand(time(0));

    Cube Noppa;
    
    int latestThrow = Noppa.throwCube();
    Noppa.showLatestThrow();
    
    return 0;
}