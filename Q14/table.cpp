#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "* -- ";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << "\n";
    }
}
