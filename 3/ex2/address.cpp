#include "address.h"

Address::Address() : street(""), postalCode(""), city("") {}

Address::Address(string street, string postalCode, string city) {
    this->street = street;
    this->postalCode = postalCode;
    this->city = city;
}

void Address::setStreet(string street) {
    this->street = street;
}

void Address::setPostalCode(string postalCode) {
    this->postalCode = postalCode;
}

void Address::setCity(string city) {
    this->city = city;
}

string Address::getStreet() {
    return street;
}

string Address::getPostalCode() {
    return postalCode;
}

string Address::getCity() {
    return city;
}

void Address::printDetails() {
    cout << "Address: " << street << ", " << postalCode << " " << city << endl;
}
