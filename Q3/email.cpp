#include <iostream>
using namespace std;
int main()
{
    string line;
    string lastThree;
    int space, a, len;
    a = 0;
    cout << "Enter email: ";
    getline(cin, line);

    len = line.length();
    for (int i = 0; i < line.length(); ++i)
    {
        if (line[i] == ' ')
        {
            ++space;
        }
    }
    for (int i = 0; i < line.length(); ++i)
    {
        if (line[i] == '@')
        {
            ++a;
        }
    }

    lastThree = line.substr(line.size() - 3);
    if (len <= 10 && space == 0 && a == 1 && (lastThree == "com" || lastThree == "edu" || lastThree == "org"))
    {
        cout << "Email address is valid";
    }

    else
    {
        cout << "This email does not satisfies the given conditions.\n";
        cout << "Email address should not contain more than 10 characters " << len;
        cout << "Email address should not contain spaces " << space;
        cout << "Email address should contain @ in it " << a;
        cout << "The last three characters should either be 'com' or 'edu' or 'org'" << lastThree;
    }
    return 0;
}