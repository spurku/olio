#include <iostream>
#include <string>
#include "person.h"
using namespace std;

int main(){
    
    {
    Person Kalle;
    Kalle.setName("Kalle");
    Kalle.setAge(20);

    Person Ville;
    Ville.setName("Ville");
    Ville.setAge(23);

    Kalle.salute();
    Ville.salute();

    int x1 = Kalle.getAge();
    int x2 = Ville.getAge();

    cout << "Kalle is" << x1 << " years old." << endl;
    cout << "Ville is" << x2 << " years old." << endl;
    }

return 0;
}