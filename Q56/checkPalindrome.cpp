#include <iostream>
using namespace std;

int main()
{
    char string1[] = "MADAM";
    int i = 0, length = 0;
    int flag = 0;

    // get length of string1
    while (string1[i])
    {
        length++;
        i++;
    }

    // loop to check both sides of string is equal or not
    for (i = 0; i < length; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << string1 << " is not a palindrome" << endl;
    }
    else
    {
        cout << string1 << " is a palindrome" << endl;
    }
    system("pause");
    return 0;
}
