#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    double sum = 0;

    cout << "Enter number1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    for (double i = num1; i < num2; i++)
    {
        if ((int)i % 2 != 0)
        {
            sum += (i * i);
        }
    }
    cout << sum;
    return 0;
}