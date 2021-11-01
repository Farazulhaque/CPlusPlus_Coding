#include <iostream>
using namespace std;

int main()
{
    int low, high;

    cout << "Enter integers: ";
    cin >> low;
    cin >> high;

    // swap if low is greater than high
    if (low > high)
    {
        int temp = high;
        high = low;
        low = temp;
    }

    // for even
    for (int i = low; i <= high; i++)
    {
        if (i % 2 == 0)
            cout << i << " ";
    }

    // for odd
    cout << endl;
    for (int i = low; i <= high; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }
    return 0;
}