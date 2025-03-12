#include "noppa.h"

Cube::Cube() {
    latestThrow = 0;
}   

Cube::~Cube() {
    std::cout << "cube object destroyed" << std::endl;
}

int Cube::throwCube() {
    latestThrow = rand() % 6 + 1;
    return latestThrow;
}

void Cube::showLatestThrow() {
    std::cout << "Latest throw: " << latestThrow << std::endl;
}