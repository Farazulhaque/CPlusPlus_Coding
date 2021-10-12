#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double const POUNDS_IN_KILOGRAM = 2.2;
    double weightInKilograms;
    double weightInPounds;
    cout << "Enter the weight of a person in kilograms: ";
    cin >> weightInKilograms;
    weightInPounds = weightInKilograms * POUNDS_IN_KILOGRAM;

    cout << fixed << setprecision(2) << weightInKilograms << " Kg = " << weightInPounds << " Pounds";
    return 0;
}