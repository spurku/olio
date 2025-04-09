#include "Address.h"

// Setters
void Address::setStreetaddress(string streetaddress) {
    this->streetaddress = streetaddress;
}

void Address::setZipcode(string zipcode) {
    this->zipcode = zipcode;
}

void Address::setCity(string city) {
    this->city = city;
}

// Getters
string Address::getStreetaddress() const {
    return streetaddress;
}

string Address::getZipcode() const {
    return zipcode;
}

string Address::getCity() const {
    return city;
}

// Print address
void Address::printAddress() const {
    cout << "Street address: " << streetaddress << endl;
    cout << "Zip code: " << zipcode << endl;
    cout << "City: " << city << endl;
}

// Input address details from user
void Address::inputAddress() {
    cout << "Enter street address: ";
    getline(cin, streetaddress);
    cout << "Enter zip code: ";
    getline(cin, zipcode);
    cout << "Enter city: ";
    getline(cin, city);
}

// Constructors
Address::Address(string streetaddress, string zipcode, string city)
    : streetaddress(streetaddress), zipcode(zipcode), city(city) {}

Address::Address()
    : streetaddress("Unknown"), zipcode("00000"), city("Unknown") {
    cout << "Address class parameterless constructor" << endl;
}
