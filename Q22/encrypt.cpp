#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    ifstream fin("encryption.txt");
    char ch;
    int i, c = 0;
    while (fin)
    {
        fin.get(ch);
        i = ch;
        // ASCII Codes
        // $ = 36
        // % = 37
        // @ = 64
        // : = 58
        // ^ = 94
        // Z = 90
        // z = 122
        if (i == 36)
        {
            cout << ".";
        }
        else if (i == 37)
        {
            cout << ";";
        }
        else if (i == 64)
        {
            cout << "\n";
        }
        else if (i == 58)
        {
            cout << ",";
        }
        else if (i == 94)
        {
            cout << " ";
        }
        else if (i == 90)
        {
            cout << "A";
        }
        else if (i == 122)
        {
            cout << "a";
        }
        else
        {
            // increase 1 number to ASCII codes
            // and print digit of that ASCII code
            i = i + 1;
            ch = i;
            cout << ch;
        }
    }
    return 0;
}
