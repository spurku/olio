#pragma once
#include <string>

class Address {
public:
    Address();
    Address(std::string street, std::string city, std::string postalCode);

    void setStreet(std::string street);
    void setCity(std::string city);
    void setPostalCode(std::string postalCode);

    std::string getStreet() const;
    std::string getCity() const;
    std::string getPostalCode() const;

    void printAddress() const;

private:
    std::string street;
    std::string city;
    std::string postalCode;
};
