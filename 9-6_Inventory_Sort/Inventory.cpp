#include"Inventory.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Inventory::Inventory()  // Default constructor, must add Inventory::
{
    itemCode = "XXX";  description = " ";  price = 0.0;
}

Inventory::Inventory(string c, string d, double p) // 3 argument constructor
{
    itemCode = c;
    description = d;
    price = p;
}
string Inventory::getCode() const//must add Inventory::
{
    return itemCode;
}

string Inventory::getDescription() const//must add Inventory::
{
    return description;
}

double Inventory::getPrice() const//must add Inventory::
{
    return price;
}