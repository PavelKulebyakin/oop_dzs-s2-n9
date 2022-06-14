#include "Taxes.h"

int main()
{
    srand(time(0));

    Property* P_arr[7];

    P_arr[0] = new Apartment(rand());
    P_arr[1] = new Apartment(rand());
    P_arr[2] = new Apartment(rand());
    P_arr[3] = new Car(rand());
    P_arr[4] = new Car(rand());
    P_arr[5] = new CountryHouse(rand());
    P_arr[6] = new CountryHouse(rand());

    cout << "Proprties: \n\n";
    for (int i = 0; i < 7; i++)
    {
        cout << i + 1 << ") " << P_arr[i]->GetWorth() << endl;
    }

    cout << "\nTaxes: \n\n";
    for (int i = 0; i < 7; i++)
    {
        cout << i + 1 << ") " << P_arr[i]->TaxCalc() << endl;
    }

    for (int i = 0; i < 7; i++)
    {
        delete P_arr[i];
    }

}
