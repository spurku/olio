#include <iostream>
#include <string>
#include "person.h"
using namespace std;

void createPerson() {
    Person tempPerson("Temporary", 30);
    tempPerson.printPersonDetails();
}

int main(){
    
    setlocale(LC_ALL,"fi_FI");

    cout << "Creating person at the beginning of main" << endl;
    Person Kalle;
    Kalle.setName("Kalle");
    Kalle.setAge(20);

    cout << "Creating person inside if block" << endl;
    if (true) {
        Person Ville;
        Ville.setName("Ville");
        Ville.setAge(23);
        Ville.salute();
    }

    cout << "Creating person inside for loop" << endl;
    for (int i = 0; i < 2; i++){
        Person tempPerson("Jalmari", i + 20);
        tempPerson.printPersonDetails();
    }

    cout << "Creating person inside a function" << endl;
    createPerson();

    cout << "Creating dynamic person" << endl;
    Person* pekka = new Person("Pekka", 20);
    pekka->printPersonDetails();
    delete pekka;

    cout << "End of main" << endl;

    return 0;
}