#include "noppa.h"
#include <iostream>
#include <string>
#include <ctime>

Cube::Cube() : numDice(1) {
    std::cout << "cube class default constructuor" << std::endl;
    srand(time(0));
}   

Cube::Cube(int numDice) : numDice(numDice) {
    std::cout << "cube parameterized constructor" << std::endl;
    srand(time(0));
}


Cube::~Cube	() {}

void Cube::setNumDice(int numDice) {
    if (numDice >= 1 && numDice <= 5) {
        this->numDice = numDice;
    }
    else {
        std::cout << "Invalid number of dice. Number must be between 1-5" << std::endl;
    }
}

int Cube::getNumDice() {
    return numDice;
}

void Cube::throwCube() {
    latestThrows.clear();
    for (int i = 0; i < numDice; ++i) {
        latestThrows.push_back(rand() % 6 + 1);
    }
}

void Cube::showLatestThrow() {
    int sum = 0;
    for (int i = 0; i < latestThrows.size(); ++i) {
        cout << "Dice " << i + 1 << ": " << latestThrows[i] << endl;
        sum += latestThrows[i];
    }
    cout << "Total: " << sum << ". Thrown with " << numDice << " dice." << endl;
}