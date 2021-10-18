#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <math.h>
using namespace std;

// function prototype
void doubleNumber(int number);
void reverseNum(int n);
void raisePower(int number);
void sumDigits(int number);
void powerFirstToSecond(int number);

// main function to call all function on the basis of user input
int main()
{
    int number, choice;
    srand(time(0));
    number = rand() % (99 - 10 + 1) + 10;

    cout << "1. Double the number." << endl;
    cout << "2. Reverse the digits of the number." << endl;
    cout << "3. Raise the number to the power of 2, 3, or 4. " << endl;
    cout << "4. Sum the digits of the number. " << endl;
    cout << "5. If the number is a two digit number, then raise the first digit to the power of the second digit." << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "The number is " << number << endl;
    if (choice == 1)
    {
        doubleNumber(number);
    }
    else if (choice == 2)
    {
        reverseNum(number);
    }
    else if (choice == 3)
    {
        raisePower(number);
    }
    else if (choice == 4)
    {
        sumDigits(number);
    }
    else if (choice == 5)
    {
        powerFirstToSecond(number);
    }
}

void doubleNumber(int number)
{
    cout << "Square of " << number << " is " << number * number;
}

void reverseNum(int number)
{
    int reverse = 0, rem, n = number;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    cout << "Reverse of " << number << " is " << reverse;
}
void raisePower(int number)
{
    cout << number << " to the power 2 is " << pow(number, 2) << endl;
    cout << number << " to the power 3 is " << pow(number, 3) << endl;
    cout << number << " to the power 4 is " << pow(number, 4) << endl;
}
void sumDigits(int number)
{
    int num = number, rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "Sum of digits of " << number << " is " << sum << endl;
}
void powerFirstToSecond(int number)
{
    int first = number / 10;
    int second = number % 10;
    cout << first << " to the power of " << second << " is " << pow(first, second);
}
