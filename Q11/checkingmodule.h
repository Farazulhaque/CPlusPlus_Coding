#include <iostream>
#include <string>
using namespace std;

void deposit(float &account, float amount);
char MainMenu();
float GetValue(string user_amount);
float GetValue(string user_amountwithdrawl, string upper_limit);
float GetInterestRate(int creditscore);
void Withdraw(int account, float &user_amountwithdrawl);
int GetLoanMonths();
int GetCreditRating();
float CalculateLoanAmount(float Principal, float interest_rate, int num_months);
int main();