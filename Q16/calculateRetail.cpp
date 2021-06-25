#include <iostream>

using namespace std;
// Prototype function
float CalculateRetail(float cost, float markup);
int main()
{
    float cost;
    float markup;
    float retailPrice;
    // Input validation of cost
    do
    {
        cout << "Enter Item's Wholesale Cost: ";
        cin >> cost;
    } while (cost < 0);

    // Input validation of markup percentage
    do
    {
        cout << "Enter Markup Percentage: ";
        cin >> markup;
    } while (markup < 0);

    // store the value returned by CalculateRetail() function in retailPrice
    retailPrice = CalculateRetail(cost, markup);
    cout << "Retail Price: " << retailPrice;
    return 0;
}

// It will return float value after calculating retail price
float CalculateRetail(float cost, float markup)
{
    float result;
    result = cost + (cost / 100 * markup);
    return result;
}

// Output
// Enter Item's Wholesale Cost: -5
// Enter Item's Wholesale Cost: 5
// Enter Markup Percentage: -90
// Enter Markup Percentage: 100
// Retail Price: 10