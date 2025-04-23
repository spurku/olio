#include <iostream>
#include <vector>
#include "Address.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    // Luodaan osoitteet eri henkilöille
    Address osoite1("Testikatu 1", "00100", "Helsinki");
    Address osoite2("Yliopistonkatu 2", "33100", "Tampere");

    // Luodaan vektori, joka sisältää osoittimia kantaluokan Person olioihin
    vector<Person*> henkilot;

    // Lisätään vektoriin eri tyyppisiä olioita, mutta kaikki tallennetaan Person*-tyyppisinä
    henkilot.push_back(new Person("Maija", 40, osoite1));  // Person-olio
    henkilot.push_back(new Student("Liisa", 22, osoite2, "S123", {"Ohjelmointi", "Matikka"}, 60));  // Student-olio
    henkilot.push_back(new Teacher("Matti", 50, osoite1, "Tietojenkäsittely"));  // Teacher-olio

    // Itekroidaan henkilöiden läpi ja kutsutaan jokaiselle printInfo()-metodia
    // Koska metodi on virtuaalinen, C++ käyttää dynaamista sidontaa (late binding):
    cout << "\n--- Tulostetaan kaikkien henkilöiden tiedot ---\n";
    for (auto h : henkilot) {
        h->printInfo();  // Dynaaminen sidonta varmistaa, että oikea metodi kutsutaan
        cout << "--------------------------\n";
    }

    // Vapautetaan muistista dynaamisesti varatut oliot
    // Person-luokan destruktori on virtuaalinen, joten myös aliluokkien destruktorit kutsutaan oikein
    for (auto h : henkilot) {
        delete h;
    }

    return 0;
}
