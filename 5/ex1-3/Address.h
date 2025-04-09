#pragma once
#include <string>
#include <iostream>

using namespace std;

class Address {
private:
    string streetaddress;
    string zipcode;
    string city;

public:
    void printAddress() const; 
    void setStreetaddress(string streetaddress);
    void setZipcode(string zipcode);
    void setCity(string city);
    string getStreetaddress() const;
    string getZipcode() const;
    string getCity() const;

    void inputAddress();  

    Address(string streetaddress, string zipcode, string city);
    Address();
};
