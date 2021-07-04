#include <iostream>
#include <random>
#include <stdlib.h>
using namespace std;

int main()
{
    int count = 1000;
    int range = 100;
    int value = 42;
    int found = 0;
    int seed;
    cout << "Enter seed: ";
    cin >> seed;
    srandom(seed);
    // call srandom
    for (int i = 0; i < count; i++)
    {
        int num = random() % range;
        cout << num << " ";
        if (value == num)
        {
            found++;
        }
    }
    cout << "\nthe value " << value
         << " was found " << found << " times\n";
    return 0;
}