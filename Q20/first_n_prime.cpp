#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, c, count;

    // n -> number of prime numbers to print
    // i -> number to be checked in each iteration starting from 2
    // c -> to check c is prime or not
    // count -> to count number of prime numbers printed

    cout << "Enter the number of prime numbers to print: ";
    cin >> n;

    if (n >= 1)
    {
        cout << "First " << n << " prime numbers are:\n";
    }

    // iteration for n prime numbers
    for (count = 0; count < n; i++)
    {
        // iteration to check c is prime or not
        // i is the number to be checked in each iteration starting from 2
        for (c = 2; c < i; c++)
        {
            if (i % c == 0)
                break;
        }

        if (c == i) // c is prime
        {
            cout << i << endl;
            count++; // increment the count of prime numbers
        }
    }

    return 0;
}