#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << "\n";
            count += 1;
        }
    }
    cout << "Total multiples of 5 between 0 nd 100 are " << count;
}
