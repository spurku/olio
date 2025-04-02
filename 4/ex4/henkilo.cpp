#include "henkilo.h"

// Normal constructor
Henkilo::Henkilo(string n, int i, string o) : nimi(n), ika(i), osoite(o) {
    cout << "Luotiin Henkilo: " << nimi << ", " << ika << " vuotta, " << osoite << endl;
}

// Copy constructor
Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika), osoite(h.osoite) {
    cout << "Kopioitiin Henkilo: " << nimi << ", " << ika << " vuotta, " << osoite << endl;
}

// Destructor
Henkilo::~Henkilo() {
    cout << "Poistetaan Henkilo: " << nimi << ", " << ika << " vuotta, " << osoite << endl;
}
