#include "henkilo.h"
#include <limits>  

int main() {
    vector<Henkilo> henkilot;

    // Predefined persons
    henkilot.emplace_back("Anne", 20, "Katu 1, Helsinki");
    henkilot.emplace_back("Kalle", 30, "Tie 2, Tampere");

    while (true) {
        cout << "\nValitse toiminto:\n";
        cout << "1. Lisää uusi henkilö\n";
        cout << "2. Tulosta henkilöt\n";
        cout << "3. Poista henkilö\n";
        cout << "4. Lopeta\n";
        cout << "Syötä valinta: ";

        int valinta;
        cin >> valinta;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');           cout << "Virheellinen syöte, yritä uudelleen.\n";
            continue;
        }

        cin.ignore();

        if (valinta == 1) {
            string nimi, osoite;
            int ika;

            cout << "Syötä henkilön nimi: ";
            getline(cin, nimi);
            cout << "Syötä henkilön ikä: ";
            
            if (!(cin >> ika)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');                 cout << "Virheellinen ikä, yritä uudelleen.\n";
                continue;
            }

            cin.ignore();
            cout << "Syötä henkilön osoite: ";
            getline(cin, osoite);

            henkilot.emplace_back(nimi, ika, osoite);
            cout << "Henkilö lisätty!\n";

        } else if (valinta == 2) {
            if (henkilot.empty()) {
                cout << "Ei tallennettuja henkilöitä.\n";
            } else {
                cout << "\nHenkilölista:\n";
                for (const auto& h : henkilot) {
                    cout << "Nimi: " << h.nimi << ", Ikä: " << h.ika << ", Osoite: " << h.osoite << endl;
                }
            }

        } else if (valinta == 3) {
            cout << "Syötä poistettavan henkilön nimi: ";
            string poistettavaNimi;
            getline(cin, poistettavaNimi);

            poistaHenkilo(henkilot, poistettavaNimi);

        } else if (valinta == 4) {
            cout << "Ohjelma lopetetaan.\n";
            break;

        } else {
            cout << "Virheellinen valinta, yritä uudelleen.\n";
        }
    }

    return 0;
}