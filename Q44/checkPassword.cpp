#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int get_randomNumber();
bool checkForDuplicates(char myArray[], char inputChar);
int get_randomNumber(int low, int high);

bool hasUpperCase(const string password);
bool hasLowerCase(const string password);
bool hasNumber(const string password);
bool hasSpecialCharacters(const string password);
bool checkPassword(const string password);

int main()
{
    char a;
    double input = 0.00;
    char myArray[8];

    cout << "Enter any number to generate a random password, or 99 to quit: " << endl;
    cin >> input;

    do
    {
        if (input == 99.00)
        {
            cout << endl
                 << "buh bye now ";
            break;
        }

        int myCount = 0;

        string new_password = "";
        do
        {
            a = static_cast<char>(get_randomNumber(48, 122));

            if (!checkForDuplicates(myArray, a))
            {
                myArray[myCount] = a;
                myCount++;
            }
        } while (myCount < 8);

        for (int y = 0; y < 8; ++y)
        {
            // cout << myArray[y];
            new_password += myArray[y];
        }

        if (checkPassword(new_password))
        {
            cout << new_password;
        }
        cout << endl;

        cout << "Enter any number to generate a random password, or 99 to quit: ";

        cin >> input;
    } while (input != 99.00);

    cout << endl;
    // system("pause");
    return 0;
}

int get_randomNumber()
{
    srand(time(0));

    int myRand;
    myRand = rand();

    return 0;
}

bool checkForDuplicates(char myArray[], char inputChar)
{
    bool duplicate = false;

    for (int i = 0; i < 8; ++i)
    {
        if (myArray[i] == inputChar)
        {
            duplicate = true;
            break;
        }
    }
    return duplicate;
}

int get_randomNumber(int low, int high)
{
    srand(time(0));
    bool ok = false;
    int myRand;

    do
    {
        myRand = rand() % high;
        if (myRand >= low && myRand <= high)
        {
            ok = true;
        }
    } while (!ok);

    return myRand;
}

bool hasUpperCase(const string password)
{
    for (auto &c : password)
    {
        if (isupper(c))
            return true;
    }
    return false;
}

bool hasLowerCase(const string password)
{
    for (auto &c : password)
    {
        if (islower(c))
            return true;
    }
    return false;
}

bool hasNumber(const string password)
{
    for (auto &c : password)
    {
        if (isdigit(c))
            return true;
    }
    return false;
}

bool hasSpecialCharacters(const string password)
{
    for (auto &c : password)
    {
        if (!isalnum(c))
            return true;
    }
    return false;
}

bool checkPassword(const string password)
{
    bool isGood = true;

    if (hasUpperCase(password) && hasLowerCase(password) && hasNumber(password) && !hasSpecialCharacters(password))
    {
        cout << endl
             << "Password passes all checks." << endl
             << endl;
        isGood = true;
    }
    else
    {
        cout << endl
             << "Improper Password! Reason: " << endl;

        if (!hasUpperCase(password))
            cout << "Your password must have at least one uppercase. " << endl;
        if (!hasLowerCase(password))
            cout << "Your password must have at least one lowercase. " << endl;
        if (hasSpecialCharacters(password))
            cout << "No special characters allowed. " << endl;
        if (!hasNumber(password))
            cout << "Your password must have at least one number. " << endl;
    }
    return isGood;
}
