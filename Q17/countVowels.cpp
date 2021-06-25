#include <iostream>
using namespace std;

int main()
{
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
    }
    cout << "Number of vowels: " << count;
    return 0;
}

// Output
// Enter First name and last name: Faraz
// Number of vowels: 2