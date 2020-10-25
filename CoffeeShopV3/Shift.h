#ifndef __SHIFT_H__
#define __SHIFT_H__

using namespace std;
#include <iostream>
#include <vector>
#include "Date.h"

class Order;
class Employee;
class Product;
class Person;

class Shift {
private:

	double clubDiscountPercent;
	Date shiftDate;

	vector<const Employee*> employees;
	vector<Product*> dailyMenu;
	vector<Order*> orders;
	
public:
	// ctor
	Shift(double clubDiscountPercent, const Date& shiftDate); 
	// copy ctor
	Shift(const Shift& other) = delete;
	// assignment operator
	const Shift& operator=(const Shift& other) = delete;
	// move assignment operator
	const Shift& operator=(Shift&& other) = delete;
	// dtor
	~Shift();

	// getters
	int getNumEmployees() const { return employees.size(); }
	int getDailyMenuSize() const { return dailyMenu.size(); }
	int getNumOrders() const { return orders.size(); }
	double getClubDiscountPercent() const { return clubDiscountPercent; }
	const Date* getShiftDate() const { return &shiftDate; }
	const vector<const Employee*> getEmployees() const { return employees; }
	const vector<Product*> getDailyMenu() const { return dailyMenu; }
	const vector<Order*> getOrders() const { return orders; }

	// setters
	void setClubDiscountPercent(double clubDiscountPercent) noexcept(false);

	// functions
	bool addProductToMenu(const Product& product);
	bool addEmployeeToShift(const Employee& employee);
	void addOrder(const Order& order);
	const Employee* getShiftManager() const;
	double getShiftProfit() const;
	friend ostream& operator<<(ostream& os, const Shift& shift);

	bool isProductExists(const Product& product) const;
	bool isEmployeeExists(const Person& employee) const;
};

#endif