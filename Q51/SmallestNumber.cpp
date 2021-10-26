#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cout << "Enter First Number: ";
    cin >> n1;

    cout << "Enter Second Number: ";
    cin >> n2;

    cout << "Enter Third Number: ";
    cin >> n3;

    if ((n1 < n2) && (n1 < n3))
    {
        cout << "The smallest number entered was " << n1 << endl;
    }
    else if ((n2 < n1) && (n2 < n3))
    {
        cout << "The smallest number entered was " << n2 << endl;
    }
    else if ((n3 < n1) && (n3 < n2))
    {
        cout << "The smallest number entered was " << n3 << endl;
    }
    return 0;
}