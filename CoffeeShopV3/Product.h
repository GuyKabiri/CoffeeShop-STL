#ifndef __PRODUCT_H__
#define __PRODUCT_H__

using namespace std;
#include <iostream>

class Product {
protected:
	string name;
	int calories;
	double cost, price;
public:
	// ctor
	Product(const string& name, int calories, double cost, double price) noexcept(false);

	// dtor
	virtual ~Product() = default;

	// operators
	bool operator==(const Product& other) const;

	// clone
	virtual Product* clone() const = 0;

	// getters
	const string& getName() const { return name; }
	virtual int getCalories() const { return calories; }
	virtual double getCost() const { return cost; }
	virtual double getPrice() const { return price; }

	// setters
	void setName(const string& name) noexcept(false);
	void setCalories(int calories) noexcept(false);
	void addCalories(int amount) noexcept(false);
	void setCost(double cost) noexcept(false);
	void setPrice(double price) noexcept(false);

	// functions
	virtual void toOs(ostream& os) const = 0;
	friend ostream& operator<<(ostream& os, const Product& product);
};

#endif