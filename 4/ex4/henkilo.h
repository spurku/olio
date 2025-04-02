#ifndef HENKILO_H
#define HENKILO_H

#include <iostream>
#include <string>

using namespace std;

class Henkilo {
public:
    string nimi;
    int ika;
    string osoite;

    // Normaali konstruktori
    Henkilo(string n, int i, string o);

    // Kopiorakentaja
    Henkilo(const Henkilo& h);

    // Destruktori
    ~Henkilo();
};

#endif
