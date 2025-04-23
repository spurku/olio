#include "Address.h"
#include <iostream>

Address::Address() : street("Unknown"), city("Unknown"), postalCode("00000") {}

Address::Address(std::string street, std::string city, std::string postalCode)
    : street(street), city(city), postalCode(postalCode) {}

void Address::setStreet(std::string street) {
    this->street = street;
}

void Address::setCity(std::string city) {
    this->city = city;
}

void Address::setPostalCode(std::string postalCode) {
    this->postalCode = postalCode;
}

std::string Address::getStreet() const {
    return street;
}

std::string Address::getCity() const {
    return city;
}

std::string Address::getPostalCode() const {
    return postalCode;
}

void Address::printAddress() const {
    std::cout << street << ", " << postalCode << " " << city << std::endl;
}
