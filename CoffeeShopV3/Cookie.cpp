#pragma warning(disable : 4996)

#include "Cookie.h"

Cookie::Cookie(const string& name, int calories, double cost, double price, eFlourType flour) :Product(name, calories, cost, price)
{
    this->flour = flour;
}

void Cookie::toOs(ostream& os) const
{
    os << ", flour: " << sFlourType[(int)flour];
}