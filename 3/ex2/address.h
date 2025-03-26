#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street;
    string postalCode;
    string city;

public:
    Address();  // Default constructor
    Address(string street, string postalCode, string city);

    void setStreet(string street);
    void setPostalCode(string postalCode);
    void setCity(string city);

    string getStreet();
    string getPostalCode();
    string getCity();

    void printDetails();
};

#endif
