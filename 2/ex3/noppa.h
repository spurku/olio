#ifndef NOPPA_h
#define NOPPA_h
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Cube {
    private:
        int latestThrow;
    public:
        Cube();
        ~Cube();
        
        int throwCube();
        void showLatestThrow();
};

#endif