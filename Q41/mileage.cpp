#include <iostream>
using namespace std;

int main()
{
    double gallons, miles, miles_per_gallons;

    cout << "Enter number of gallons of gas the car can hold: ";
    cin >> gallons;

    cout << "Enter number of miles it can be driven on the full tank: ";
    cin >> miles;

    miles_per_gallons = miles / gallons;
    cout << "Number of miles that may be driven per gallon of gas are: " << miles_per_gallons;
    return 0;
}