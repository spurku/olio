#ifndef HENKILO_H
#define HENKILO_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Henkilo {
    string nimi;
    int ika;
    string osoite;

    Henkilo(string n, int i, string o);
};

// Function to delete a person by name
void poistaHenkilo(vector<Henkilo>& henkilot, const string& poistettavaNimi);

#endif // HENKILO_H
