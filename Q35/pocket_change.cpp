// Program      :
// Author       :
// Date         :
// Description  :

#include <iostream>
using namespace std;

// function to get user input and output the result
void get_input();
void get_output(int quarters, int dimes, int nickels, int pennies);

// main function to call the get_input function
int main()
{
    get_input();
    return 0;
}

// get user input
void get_input()
{
    // declare variables
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    // print statements and store value in variables
    cout << "Enter number of quarters : ";
    cin >> quarters;

    cout << "Enter number of dimes    : ";
    cin >> dimes;

    cout << "Enter number of nickels  : ";
    cin >> nickels;

    cout << "Enter number of pennnies : ";
    cin >> pennies;

    // call get_output function to get result
    get_output(quarters, dimes, nickels, pennies);
}

void get_output(int quarters, int dimes, int nickels, int pennies)
{
    // declare variable
    float change;
    // calculte
    change = quarters * 25 + dimes * 10 + nickels * 5 + pennies;
    // print output
    cout << "\nWith " << quarters << " quarter(s), " << dimes << " dime(s), " << nickels << " nickels(s) and " << pennies << " penn(y/ies)," << endl;
    cout << "you have $" << (float)change / 100 << " in change.";
}
