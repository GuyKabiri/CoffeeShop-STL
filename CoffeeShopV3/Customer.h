#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

using namespace std;
#include <iostream>
#include "Person.h"

class Customer : public Person {
private:
	bool clubMember;

	Customer(const Customer& other) = default;
	Customer(Customer&& other) = default;

	Customer& operator=(const Customer& other) = default;
	Customer& operator=(Customer&& other) = default;

public:
	friend class CoffeeShop;
	// ctor
	Customer(const string& name, const string& phoneNumber, bool clubMember = false) noexcept(false);

	// getters
	bool isClubMember() const { return clubMember; }

	// setters
	void setClubMember(bool clubMember);

	// functions
	void toOs(ostream& os) const override;
};

#endif