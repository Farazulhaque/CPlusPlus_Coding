// Write a program that reads numbers from the user,
// and prints a table showing how many times each digit appears in each number.
// The user should be able to enter more than one number to be tested for repeated digits.
// The program should terminate when the user enters a number that is less than 0.
#include <iostream>
using namespace std;

void count(int arr[], int digit);
int main()
{
    int digits[10] = {0};
    int n;
    while (1)
    {
        cout << "Enter a number (-1 to end this loop): ";
        cin >> n;
        if (n < 0)
        {
            cout << "Thank you for using my program!!" << endl;
            break;
        }
        count(digits, n);
    }
    return 0;
}

void count(int digits[], int num)
{
    // digits = {0};
    int temp;
    while (num != 0)
    {
        temp = num % 10;
        digits[temp] += 1;
        num /= 10;
    }
    cout << "Digit      : 0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "Occurrences: ";
    for (int i = 0; i < 10; i++)
    {
        cout << digits[i] << " ";
        digits[i] = 0;
    }
    cout << endl;
}