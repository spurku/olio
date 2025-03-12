
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main(){
    
    setlocale(LC_ALL,"fi_FI");;

    {
    Person Kalle;
    Kalle.setName("Kalle");
    Kalle.setAge(20);

    Person Ville;
    Ville.setName("Ville");
    Ville.setAge(23);

    Kalle.salute();
    Ville.salute();
    
    cout << "for lohkon sisällä luotu olio" << endl;
    for (int i = 0; i < 2; i++){
        Person tempPerson("Jalmari", i + 20);
        tempPerson.printPersonDetails();
    }

    cout << "Aliohjelman sisällä luotu olio" << endl;

    int x1 = Kalle.getAge();
    int x2 = Ville.getAge();

    cout << "Kalle is" << x1 << " years old." << endl;
    cout << "Ville is" << x2 << " years old." << endl;
    
    Person Jalmari("Jalmari", 20);
    Jalmari.printPersonDetails();
}

return 0;
}