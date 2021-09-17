#include <iostream>
using namespace std;

int main()
{
    // declaring variables
    char ch;
    int n;
    char yn;
    // loop untill user enter y
    do
    {
        // get character input and store value in ch variable
        cout << "Enter character to print: ";
        cin >> ch;
        // get number of times input and store it in n variable
        cout << "Enter number of times to print it: ";
        cin >> n;
        // for loop from 0 to n-1 to print character n times
        for (int i = 0; i < n; i++)
        {
            cout << ch;
        }
        // asking again to print or not and store it in yn
        cout << "\nDo you have another character you want to print? (y/n): ";
        cin >> yn;
        // check condition yn is equal to y
    } while (yn == 'y');

    return 0;
}

