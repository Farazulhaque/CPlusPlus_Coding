#include <iostream>
using namespace std;
int main()
{
    string line1;
    string line2;
    cout << "Enter password: ";
    getline(cin, line1);
    cout << "Enter password again: ";
    getline(cin, line2);

    int check = line1.compare(line2);

    if (check == 0)
    {
        cout << "Password matched";
    }
    else
    {
        cout << "Password did not matched";
    }
}