#pragma once
#include <string>
#include <iostream>

using namespace std;

class Address {
private:
    string streetaddress;
    int zipcode;
    string city;

public:
    void printAddress() const;
    void setStreetaddress(string streetaddress);
    void setZipcode(int zipcode);
    void setCity(string city);
    string getStreetaddress() const;
    int getZipcode() const;
    string getCity() const;

    void inputAddress();

    Address(string streetaddress, int zipcode, string city); 
    Address();
};