#include "Taxes.h"

float Property::GetWorth()
{
	return worth;
}
void Property::SetWorth(float worth1)
{
	worth = worth1;
}
float Apartment::TaxCalc()
{
	return (GetWorth() / 1000);
}
float Car::TaxCalc()
{
	return (GetWorth() / 200);
}
float CountryHouse::TaxCalc()
{
	return (GetWorth() / 500);
}