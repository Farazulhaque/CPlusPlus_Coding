#include <iostream>
using namespace std;

int main()
{
    // This loop is to count  
    for (int i = 0; i < 5; i++)
    {
        // This loop is for print
        for (int j = 5; j > i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}
