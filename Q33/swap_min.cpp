#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int min(int a, int b)
{
    int res;
    if (a < b)
        res = a;
    else
        res = b;
    return res;
}

int main()
{
    int x = 50, y = 10;
    cout << "Swapping x and y: ";
    swap(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    cout << "min(x,y) = " << min(x, y) << endl;
}