// Name
// Date
// Program Name
// Program Description

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int adult, student, child, total, tourGuide;
    int adultCost, childCost, studentCost, subtotal, tax;
    string leader;
    cout << "Adults: 100 Rs" << endl;
    cout << "Child: 50 Rs" << endl;
    cout << "Students: 80 Rs" << endl;

    cout << "How many tickets you want to book? " << endl;
    cout << "Adult? : ";
    cin >> adult;
    cout << "Student? : ";
    cin >> student;
    cout << "Child? : ";
    cin >> child;

    cout << "Enter name of the group leader: \n";
    getline(cin, leader);

    total = adult + child + student;
    if (total > 3)
    {
    	
        tourGuide = total / 3;
    }
    adultCost = adult * 100;
    childCost = child * 50;
    studentCost = student * (80 - 80 * 0.1);
    subtotal = adultCost + childCost + studentCost;
    tax = subtotal * 0.15;

    cout << "Reciept" << endl;
    cout << "Adults : " << adultCost << " Rs" << endl;
    cout << "Childs : " << childCost << " Rs" << endl;
    cout << "Students : " << studentCost << " Rs" << endl;
    cout << "Subtotal : " << subtotal << " Rs" << endl;
    cout << "Tax Amt : " << tax << " Rs" << endl;
    cout << "Total: " << subtotal + tax << " Rs" << endl;

    return 0;
}
