#include <iostream>
#include <cmath>

using namespace std;

// FUNCTION PROTOTYPE FOR read_range
void read_range(int &imin, int &imax);

// FUNCTION PROTOTYPE FOR is_prime
int is_prime(int n);

// FUNCTION PROTOTYPE FOR display_primes
void display_primes(string str, int &imin, int &imax);

// DO NOT MODIFY THE MAIN ROUTINE IN ANY WAY
int main()
{
    int imin(0), imax(0);

    // Read in range
    read_range(imin, imax);

    // Print prime numbers
    cout << endl;
    display_primes("Primes: ", imin, imax);

    return 0;
}

// DEFINE FUNCTION read_range() HERE:
void read_range(int &imin, int &imax)
{
    cout << "Enter minimum and maximum: ";
    cin >> imin;
    cin >> imax;
}

// DEFINE FUNCTION is_prime() HERE:
int is_prime(int n)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

// DEFINE FUNCTION display_primes() HERE:
void display_primes(string str, int &imin, int &imax)
{
}