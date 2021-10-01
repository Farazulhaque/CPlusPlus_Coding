#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a month number 1 - 12: ";
    cin >> number;
    string month = "";

    switch (number)
    {
    case 1:
        month = "January";
        break;
    case 2:
        month = "February";
        break;
    case 3:
        month = "March";
        break;
    case 4:
        month = "April";
        break;
    case 5:
        month = "May";
        break;
    case 6:
        month = "June";
        break;
    case 7:
        month = "July";
        break;
    case 8:
        month = "August";
        break;
    case 9:
        month = "September";
        break;
    case 10:
        month = "October";
        break;
    case 11:
        month = "November";
        break;
    case 12:
        month = "December";
        break;
    default:
        cout << "This is not a valid month!";
        break;
    }

    if (month != "")
    {
        cout << "That number is abbreviated as " << month;
    }
    return 0;
}


