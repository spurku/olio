#include <iostream>
#include "Person.h"

using namespace std;

void createPerson() {
    Person tempPerson("Temporary", 30);
    tempPerson.printDetails();
}

int main() {
    cout << "Creating person at the beginning of main" << endl;
    Person kalle;
    kalle.setName("Kalle");
    kalle.setAge(20);
    kalle.printDetails();

    cout << "Creating person inside if block" << endl;
    if (true) {
        Person ville("Ville", 23);
        ville.printDetails();
    } 

    cout << "Creating person inside for loop" << endl;
    for (int i = 0; i < 2; i++) {
        Person tempPerson("Jalmari", i + 20);
        tempPerson.printDetails();
    } 

    cout << "Creating person inside a function" << endl;
    createPerson();

    cout << "Creating dynamic person" << endl;
    Person* pekka = new Person("Pekka", 25);
    pekka->printDetails();
    delete pekka; 

    cout << "End of main" << endl;

    return 0;
}
