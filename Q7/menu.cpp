// Test2Q1.cpp
#include <iostream>
using namespace std;

// function prototypes
float original_price();
int get_Option();
float price_afterTax(float bp, int g); // first error -> return type should be float and missing arguments

// start main function
int main()
{
    float price; // should > 0 // second error -> price should not be initialised

    int option; // third error -> option should not be initialised
                // 1 -> Furniture
                // 2 -> Kitchenware
                // 3 -> Groceries

    price = original_price(); // fourth error -> missing brackets -> ()
    option = get_Option();

    cout << "Original price before tax = " << price << "\n\n";

    price = price_afterTax(price, option); // fifth error -> assign value again to price
    cout << "Total price after Tax = " << price << '\n';

    return 0;
}

// start new user-defined functions
float original_price() // sixth error -> return type should be float
{
    float bp = 0;

    while (bp <= 0) // seventh error -> condition should be less than equal to 0 -> bp <= 0
    {
        cout << "Item price (RM): ";
        cin >> bp;
    }

    return bp;
}

int get_Option() // eighth error -> return type should be int
{
    int g = 0; // ninth error -> there should be assignment operator(=) instead of comparison operator(==)
    do
    {
        cout << "\n";
        cout << "1 -> Furniture\n";
        cout << "2 -> Kitchenware\n";
        cout << "3 -> Groceries\n";
        cout << "Item type (1,2,3): ";
        cin >> g;
    } while (g < 1 || g > 3); // tenth error -> loop until the value is lessthan 1 or greater than 3

    cout << "\n";
    return g;
}

// tax is based on item types as follows
// 1 -> Furniture => 6%
// 2 -> Kitchenware => 4%
// 3 -> Groceries => 2%
float price_afterTax(float bp, int g) // eleventh error -> return type should be float
{
    float tax = 0;
    switch (g)
    {
    case 1:
        tax = bp * 6 / 100;
        break;
    case 2:
        tax = bp * 4 / 100;
        break; // twelth error -> missing break keyword
    case 3:
        tax = bp * 2 / 100;
        break; // thrteenth error -> missing break keyword
    }

    cout << "Tax cost = " << tax << "\n";
    bp += tax;
}