#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    char str[100] = "2020cccbbba";
    char alphabets[50];

    // cout << "Input Message: ";
    // cin.getline(str, 100);

    // Printing message
    cout << "Message: " << str << endl;

    // Counting number of symbols
    int times = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        bool appears = false;
        for (int j = 0; j < i; j++)
        {
            if (str[j] == str[i])
            {
                appears = true;
                break;
            }
        }

        if (!appears)
        {
            times++;
        }
    }
    cout << "Number of symbols in the alphabet = " << times << endl;

    // Printing characters
    cout << "Characters in the alphabet = ";
    int unique = 0;
    int indalp = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        bool appears = false;
        for (int j = 0; j < i; j++)
        {
            if (str[j] == str[i])
            {
                appears = true;
                break;
            }
        }

        if (!appears)
        {
            cout << str[i];
            if (i != strlen(str) - 1)
            {
                cout << ", ";
            }
            alphabets[indalp] = str[i];
            unique++;
            indalp++;
        }
    }

    // Printing number of bits per symbol
    cout << "\nNumber of bits per symbol = " << ceil(log2(times)) << endl;

    // Printin Histogram
    cout << "Histogram showing the frequency of the symbols in the alphabet\n";
    for (int i = 0; i < unique; i++)
    {
        cout << alphabets[i] << " | ";
        for (int j = 0; j < strlen(str); j++)
        {
            if (alphabets[i] == str[j])
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
}
