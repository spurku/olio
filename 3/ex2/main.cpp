#include <iostream>
#include "person.h"
#include "address.h"

using namespace std;

int main() {

    Address address1("Example Street 12", "00100", "Helsinki");

    Person person1("John Doe", 30, address1);

    Person person2("Anna Smith", 25);

    cout << "First person's details:" << endl;
    person1.printDetails();
    cout << endl;

    Address address2("Kotikatu 5", "00200", "Espoo");
    person2.setAddress(address2);

    cout << "Second person's details:" << endl;
    person2.printDetails();

    return 0;
}
