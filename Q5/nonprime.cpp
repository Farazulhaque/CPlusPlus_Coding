#include <iostream>
using namespace std;
void primeNumbers(int n1, int n2)
{
   int flag, i;
   // to loop untill first number is lower than or equal to second number
   while (n1 <= n2)
   {
      flag = 0;
      // loop to check if it is divisible by any number or not
      for (i = 2; i <= n1 / 2; i++)
      {
         // If it is divisible then flag = 1
         if (n1 % i == 0)
         {
            flag = 1;
            break;
         }
      }
      // And if flag == 1, then print the value of n1
      if (flag == 1)
         cout << n1 << ", ";
      n1++;
   }
}
int main()
{
   // Declare n1 and n2 to get user input
   int n1, n2;
   // store first number in n1 variable
   cout << "Enter n1: ";
   cin >> n1;
   // store second number in n2 variable
   cout << "Enter n2: ";
   cin >> n2;
   // Now check for negative number
   // If negative then print name and ID number
   if (n1 < 0 || n2 < 0)
   {
      cout << "Your Name: \n";
      cout << "Your ID Number: \n";
   }
   // Else call primeNumbers(n1, n2), here n1 and n2 is replaced by the value inputted
   else
   {
      cout << "Non Prime numbers in the interval " << n1 << " and " << n2 << " are: ";
      primeNumbers(n1, n2);
   }
   return 0;
}
