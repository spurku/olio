#ifndef NOPPA_H
#define NOPPA_H

#include <iostream>
#include <vector>
using namespace std;

class Cube {
private:
    int numDice;
    vector<int> latestThrows;

public:
    Cube(); // Default const
    Cube(int numDice); 
    ~Cube();

    void setNumDice(int numDice);
    int getNumDice();
    void throwCube();
    void showLatestThrow();
};

#endif