#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "noppa.h"

using namespace std;

int main () {

    setlocale(LC_ALL, "fi_FI");

    std::cout << "Choose game: \n 1. monopoly (2 dices) \n2 - Yatzy (5 dices)"  << std::endl;
    std::cin >> gameChoice;

    if (gameChoice == 1) {
        cube monopoly(2)
        monopoly.throwCube();
        monopoly.showLatestThrow();
    }
    else if (gameChoice == 2) {
        cube yatzy(5)
        yatzy.throwCube();
        yatzy.showLatestThrow();
        std::cout << result 
    }
        
    srand(time(0));

    Cube Noppa;
    
    int latestThrow = Noppa.throwCube();
    Noppa.showLatestThrow();
    
    return 0;
}