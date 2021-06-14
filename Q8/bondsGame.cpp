#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    for (int i = 0; i < 5; i++)
    {
        int x, y, product;
        x = (rand() % 12) + 1;
        y = (rand() % 12) + 1;
        cout << x << " x " << y << " = ";
        cin >> product;
        if (x * y == product)
        {
            cout << "\t...correct\n";
        }
        else
        {
            cout << "\t...wrong\n";
        }
    }
}