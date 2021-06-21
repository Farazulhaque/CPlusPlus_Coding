#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "checkingmodule.h"
using namespace std;

int main()
{
    void deposit(float &account, float amount);
}

char MainMenu()
{
    char character;
    do
    {
        cout << "Input one of the following: 'D', 'W', 'L', 'Q'" << endl;
        cin >> character;
    } while (character != 'D' || character != 'W' || character != 'L' || character != 'Q');

    return character;
}

float GetValue(int user_amount)
{
    do
    {
        cout << "Input an amount" << endl;
        cin >> user_amount;
    } while (user_amount <= 0);

    return user_amount;
}

void deposit(float &account, float amount)
{
    account = account + amount;
}

float GetValue(int user_amountwithdrawl, int upper_limit)
{
    do
    {
        cout << "Input withdrawl amount" << endl;
        cin >> user_amountwithdrawl;
    } while (user_amountwithdrawl < 0 || user_amountwithdrawl > upper_limit);

    return user_amountwithdrawl;
}

float GetInterestRate(int creditscore)
{
    float interest_rate;
    if (creditscore <= 500)
    {
        interest_rate = 0.05;
    }
    else if (creditscore <= 700)
    {
        interest_rate = 0.03;
    }
    else if (creditscore > 700)
    {
        interest_rate = 0.01;
    }
    return interest_rate;
}

void Withdraw(int account, float &user_amountwithdrawl)
{
    account = account - GetValue(user_amountwithdrawl);
}

int GetLoanMonths()
{
    int user_num_months;
    do
    {
        cout << "Input number of months" << endl;
        cin >> user_num_months;
    } while (user_num_months != 12 && user_num_months != 24 && user_num_months != 36 && user_num_months != 60);
    return user_num_months;
}

int GetCreditRating()
{
    int user_credit_rating;
    do
    {
        cout << "Input credit rating" << endl;
        cin >> user_credit_rating;
    } while (user_credit_rating < 300 || user_credit_rating > 850);
    return user_credit_rating;
}

float CalculateLoanAmount(float Principal, float interest_rate, int num_months)
{
    float Amount;
    Amount = pow(interest_rate / 12 + 1, num_months / 12) * Principal;
    return Amount;
}

float OutputAccount(float amount)
{
    cout << amount;
    return amount;
}

