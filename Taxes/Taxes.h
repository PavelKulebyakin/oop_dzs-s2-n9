#ifndef TAX_H
#define TAX_H

#include <iostream>
#include <random>
using namespace std;

class Property
{
private:
	float worth;

public:
	Property(float worth = 1000)
	{
		this->worth = worth;
	}
	virtual float TaxCalc() = 0;
	float GetWorth();
	void SetWorth(float worth);
};

class Apartment : public Property
{
public:
	float TaxCalc() override;
	Apartment(float worth = 2000) : Property(worth) {}
};

class Car : public Property
{
public:
	float TaxCalc() override;
	Car(float worth = 500) : Property(worth) {}
};

class CountryHouse : public Property
{
public:
	float TaxCalc() override;
	CountryHouse(float worth = 1500) : Property(worth) {}
};


#endif // !TAX_H


