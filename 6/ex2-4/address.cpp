#include "Address.h"

void Address::setStreetaddress(string streetaddress) {
    this->streetaddress = streetaddress;
}

void Address::setZipcode(int zipcode) {
    this->zipcode = zipcode;
}

void Address::setCity(string city) {
    this->city = city;
}

string Address::getStreetaddress() const {
    return streetaddress;
}

int Address::getZipcode() const {
    return zipcode;
}

string Address::getCity() const {
    return city;
}

void Address::printAddress() const {
    cout << streetaddress << ", " << zipcode << " " << city << endl;
}

void Address::inputAddress() {
    cout << "Enter street address: ";
    getline(cin, streetaddress);

    cout << "Enter zipcode: ";
    cin >> zipcode;
    cin.ignore();  

    cout << "Enter city: ";
    getline(cin, city);
}

// Constructor with parameters
Address::Address(string streetaddress, int zipcode, string city)
    : streetaddress(streetaddress), zipcode(zipcode), city(city) {}

// Default constructor
Address::Address()
    : streetaddress("Unknown"), zipcode(0), city("Unknown") {}