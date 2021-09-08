#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main()
{
    int a, b, result;
    srand(time(0));
    a = rand();
    b = rand();
    cout << a << " + " << b << endl;
    cout << "Enter Result: ";
    cin >> result;
    if (a + b == result)
    {
        cout << "Congratulations! Your answer is correct." << endl;
    }
    else
    {
        cout << "Sorry. Your answer is not correct." << endl;
        cout << "The correct answer is " << a + b;
    }
    return 0;
}


