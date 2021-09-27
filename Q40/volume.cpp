#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r, h, volume;
    cout << "Enter radius of cylindrical fuel tank: ";
    cin >> r;
    cout << "Enter height of cylindrical fuel tank: ";
    cin >> h;

    volume = PI * pow(r, 2);
    cout << " The volume of the cylinder is: " << volume;
    return 0;
}