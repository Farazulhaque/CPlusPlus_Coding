#include <iostream>
using namespace std;

int main()
{
    float payRate;
    int weekHours[4];
    float incomeBeforeTax = 0;
    float incomeAfterTax;
    float schoolSupplies;
    float savingBonds;
    float additionalSavingBonds;
    cout << "Enter Pay Rate: ";
    cin >> payRate;

    for (int i = 1; i <= 4; i++)
    {
        cout << "Enter hours you worked for week" << i << ": ";
        cin >> weekHours[i - 1];
    }
    cout << "Pay Rate: " << payRate << endl;
    for (int i = 0; i < 4; i++)
    {
        incomeBeforeTax += payRate * weekHours[i];
    }
    cout << "Income Before Tax: " << incomeBeforeTax << endl;
    incomeAfterTax = incomeBeforeTax - (incomeBeforeTax * 0.14);
    cout << "Income After Tax: " << incomeAfterTax << endl;
    schoolSupplies = incomeAfterTax * 1 / 100;
    cout << "Money Spend on School Supplies: " << schoolSupplies << endl;
    savingBonds = (incomeAfterTax - (incomeAfterTax * 10 / 100) - schoolSupplies) * 25 / 100;
    cout << "Money Spend on Saving Bonds: " << savingBonds << endl;
    additionalSavingBonds = int(savingBonds / 10) * 0.5;
    cout << "Additional Saving Bonds: " << additionalSavingBonds << endl;

    return 0;
}
