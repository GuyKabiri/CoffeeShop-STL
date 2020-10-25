#ifndef __ORDER_H__
#define __ORDER_H__

using namespace std;
#include <iostream>
#include <vector>

class Product;
class Employee;
class Customer;

class Order {
private:
	vector<Product*> items;

	const Employee& employee;
	const Customer& customer;

	Order(const Order& other);
	const Order& operator=(const Order& other);
	const Order& operator=(Order&& other) = delete;
public:
	friend class Shift;
	// ctor
	Order(const Employee& employee, const Customer& customer);
	// dtor
	~Order();

	// operators
	const Product& operator[](int index) const { return *items[index]; }
	Order& operator+=(const Product& product);

	// getters
	int getNumItems() const { return (int)items.size(); }
	const vector<Product*> getItems() const { return items; }
	const Employee& getEmployee() const { return employee; }
	const Customer& getCustomer() const { return customer; }

	// functions
	bool addItem(const Product& product);
	int getTotalCalories() const;
	double getOrderProfit() const;
	friend ostream& operator<<(ostream& os, const Order& order);
};

#endif
