#include <iostream>
using namespace std;

const int MAX_CHAR = 26;

int main()
{
    int charCount[MAX_CHAR] = {0};
    string name;
    int count = 0;
    cout << "Enter First name and last name: ";
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        name[i] = tolower(name[i]);
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
        charCount[name[i] - 'a']++;
    }
    cout << "Number of vowels: " << count;
    cout << "Characters in alphabetical order: ";
    for (int i = 0; i < MAX_CHAR; i++)
        for (int j = 0; j < charCount[i]; j++)
            cout << (char)('a' + i);
    return 0;
}

// Output
// Enter First name and last name: Faraz
// Number of vowels: 2