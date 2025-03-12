#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "noppa.h"

using namespace std;

int main () {

    setlocale(LC_ALL, "fi_FI");

    int gameChoice;
    cout << "Choose a game: 1. Monopoly 2. Yatzy" << endl;
    cin >> gameChoice;

    if (gameChoice == 1) {
        Cube monopoly(2);
        monopoly.throwCube();
        monopoly.showLatestThrow();
    }
    else if (gameChoice == 2) {
        Cube yatzy(5);
        yatzy.throwCube();
        yatzy.showLatestThrow();
        std::cout << "results"; 
    }
        
    srand(time(0));

    Cube Noppa;
    
    Noppa.throwCube();
    Noppa.showLatestThrow();
    
    return 0;
}