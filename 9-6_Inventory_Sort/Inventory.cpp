#include"Inventory.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Inventory::Inventory()  // Default constructor
{
    itemCode = "XXX";  description = " ";  price = 0.0;
}

Inventory::Inventory(string c, string d, double p) // 3 argument constructor
{
    itemCode = c;
    description = d;
    price = p;
}
string Inventory::getCode() const
{
    return itemCode;
}

string Inventory::getDescription() const
{
    return description;
}

double Inventory::getPrice() const
{
    return price;
}