#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

using namespace std;
#include <iostream>
#include "CoffeeShop.h"

enum class eProductType { COFFEE, COOKIE, SALAD };

// initialize cofeeshop from user input
CoffeeShop initCoffeeShop();

// coffeeshop menu
void menu(CoffeeShop& shop);

// shift menu
void shiftMenu(CoffeeShop& shop);

// 1.
void showCoffeeShop(CoffeeShop& shop);

const Product* chooseProductByType(CoffeeShop& shop, const type_info& productType);
// 6.
void addProductMenu(CoffeeShop& shop);
bool addProduct(CoffeeShop& shop, const type_info& productType);
bool addCookieCoffee(CoffeeShop& shop);
// 7.
void addEmployee(CoffeeShop& shop);
// 8.
void addCustomer(CoffeeShop& shop);
// 9.
void openShift(CoffeeShop& shop, const Date& date);

void makeOrder(CoffeeShop& shop, Shift& shift);

// 10.
void deleteCustomer(CoffeeShop& shop);
void addEmployeesToShift(CoffeeShop& shop, Shift& shift);
void addProductToDailyMenu(CoffeeShop& shop, Shift& shift);

void showShiftProfits(const Shift& shift);

#endif