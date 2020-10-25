#ifndef __COFFEE_H__
#define __COFFEE_H__

using namespace std;
#include <iostream>
#include "Product.h"

class Coffee : virtual public Product {
protected:
	bool withMilk;
	int sugarSpoons;
public:
	// ctor
	Coffee(const string& name, int calories, double cost, double price, bool withMilk = false, int sugarSpoons = 0) noexcept(false);

	// operators
	const Coffee& operator+=(int sugarSpoons) noexcept(false);

	// clone
	virtual Product* clone() const override { return new Coffee(*this); }

	// getters
	bool getWithMilk() const { return withMilk; }
	int getSugarSpoons() const { return sugarSpoons; }

	// functions
	void addSugar(int sugarSpoons = 1) noexcept(false);
	void setMilk(bool isWithMilk) noexcept(false);

	void toOs(ostream& os) const override;
};

#endif
