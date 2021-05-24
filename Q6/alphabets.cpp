#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    // an array with 4 rows and 6 columns.
    char alphabet[4][6] = {{'*', 'n', 'a', 'm', 'm', 'a'}, {'h', 's', 'a', 'r', 'e', 'j'}, {'&', 'd', 'i', 'b', 'r', 'i'}, {'n', 'u', 'o', 'l', 'j', 'a'}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            // Converting character to upper case
            alphabet[i][j] = toupper(alphabet[i][j]);
        }
    }

    // --------------------------------------------------------------------
    int vowCount = 0;
    int i = 0;
    do
    {
        int j = 0;
        do
        {
            switch (alphabet[i][j])
            {
            case 'a':
                vowCount++;
                break;
            case 'A':
                vowCount++;
                break;
            case 'e':
                vowCount++;
                break;
            case 'E':
                vowCount++;
                break;
            case 'i':
                vowCount++;
                break;
            case 'I':
                vowCount++;
                break;
            case 'o':
                vowCount++;
                break;
            case 'O':
                vowCount++;
                break;
            case 'u':
                vowCount++;
                break;
            case 'U':
                vowCount++;
                break;
            }
            j++;
        } while (j < 6);
        i++;
    } while (i < 4);
    cout << "Total Vowels are: " << vowCount << endl;

    // --------------------------------------------------------------------
    i = 0;
    while (i < 4)
    {
        int j = 0;
        while (j < 6)
        {
            cout << "Element at alphabet[" << i
                 << "][" << j << "]: " << alphabet[i][j] << endl;
            j++;
        }
        i++;
    }
    return 0;
}
