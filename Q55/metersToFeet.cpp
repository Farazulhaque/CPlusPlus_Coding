#include <iostream>
#include <iomanip>
using namespace std;

double takeInput();
double convertToFeet(double meters);
void display(double output);

int main()
{
    while (true)
    {
        string choice;
        double meters = takeInput();
        double output = convertToFeet(meters);
        display(output);
        cout << "\n\nDo you want to enter again? [y/n]: ";
        cin >> choice;
        if (choice != "y")
        {
            return 0;
        }
    }
    return 0;
}

double takeInput()
{
    double meter, feet;
    cout << "Enter meter: ";
    cin >> meter;
    feet = meter * 12;
    return meter;
}

double convertToFeet(double meters)
{
    double feet;
    feet = meters * 12;
    return feet;
}
void display(double output)
{
    cout << fixed << setprecision(2) << "Feet = " << output;
}