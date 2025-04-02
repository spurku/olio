#include "henkilo.h"
#include <vector>

int main() {
    vector<Henkilo*> henkilot;

    henkilot.push_back(new Henkilo("Anne", 20, "Katu 1, Helsinki"));
    henkilot.push_back(new Henkilo("Kalle", 30, "Tie 2, Tampere"));
    henkilot.push_back(new Henkilo("Matti", 25, "Kuja 3, Turku"));
    henkilot.push_back(new Henkilo("Liisa", 28, "Polku 4, Oulu"));
    henkilot.push_back(new Henkilo("Pekka", 35, "Raitti 5, Espoo"));

    cout << "\nTulostetaan henkilöt:\n";
    for (const auto& h : henkilot) {
        cout << h->nimi << ", " << h->ika << " vuotta, " << h->osoite << endl;
    }

    for (auto& h : henkilot) {
        delete h;
    }

    henkilot.clear();

    return 0;
}