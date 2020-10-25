#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

using namespace std;
#include <iostream>
#include "Person.h"
#include "Date.h"

class Employee : public Person {
private:
	double shiftSalary;
	Date hireDate;

	Employee(const Employee& other) = default;
	Employee(Employee&& other) = default;
	
	Employee& operator=(const Employee& other) = default;
	Employee& operator=(Employee&& other) = default;

public:
	friend class CoffeeShop;
	// ctor
	Employee(const string& name, const string& phoneNumber, double shiftSalary, const Date& hireDate) noexcept(false);
	
	// operators
	bool operator<(const Employee& other) const; 
	bool operator>(const Employee& other) const;

	// getters
	double getShiftSalary() const { return shiftSalary; }
	const Date* getHireDate() const { return &hireDate; }

	// setters
	void setShiftSalary(double shiftSalary) noexcept(false);
	void setHireDate(Date& hireDate) noexcept(false);

	// functions
	int getSeniority() const;
	void toOs(ostream& os) const override;
};

#endif