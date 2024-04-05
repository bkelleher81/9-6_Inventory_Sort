#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Inventory
{
private:
    string itemCode;
    string description;
    double price;

public:
    Inventory();// Default constructor
    Inventory(string c, string d, double p); // 3 argument constructor
    string getCode() const;
    string getDescription() const;
    double getPrice() const;   

};