#include "henkilo.h"

Henkilo::Henkilo(string n, int i, string o) : nimi(n), ika(i), osoite(o) {}

void poistaHenkilo(vector<Henkilo>& henkilot, const string& poistettavaNimi) {
    auto it = remove_if(henkilot.begin(), henkilot.end(), 
        [&](const Henkilo& h) { return h.nimi == poistettavaNimi; });

    if (it != henkilot.end()) {
        henkilot.erase(it, henkilot.end());
        cout << "Henkilö '" << poistettavaNimi << "' poistettu.\n";
    } else {
        cout << "Henkilöä '" << poistettavaNimi << "' ei löytynyt.\n";
    }
}
