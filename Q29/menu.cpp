#include <iostream>
#include <string.h>

using namespace std;
int addGrade();
int main()
{
    // to get student choice
    int choice;
    // print details
    cout << "Student Name: Your Name" << endl;
    cout << "CIS 232 Introduction to Programming" << endl;
    cout << "Programming Project 1" << endl;
    // loop to get menu after each choice
    do
    {
        // new line
        cout << "\n";
        // loop to print *
        for (int i = 0; i < 70; i++)
            cout << "*";
        // print menu
        cout << "\n 1. Calculate and print the sum of the entered integers." << endl;
        cout << " 2. Reverse the order of characters in the entered string." << endl;
        cout << " 3. Determine the gross pay for an employee." << endl;
        cout << " 4. Exit" << endl;
        // loop to print *
        for (int i = 0; i < 70; i++)
            cout << "*";
        // get the user choice
        cout << "\n\tEnter the number of the selected task: ";
        cin >> choice;
        // if choice is equal to 1
        if (choice == 1)
        {
            // declaring variables used for choice 1
            int n, num, sum = 0;
            cout << "\n\tHow many integer numbers? ";
            cin >> n;
            // loop to get n times number
            for (int i = 1; i <= n; i++)
            {
                cout << "\tEnter number " << i << ": ";
                // store in num variable
                cin >> num;
                // and add to sum variable
                sum += num;
            }
            // print sum
            cout << "\n\tThe sum of " << n << " numbers is: " << sum << endl;
        }
        // if choice is equal to 2
        else if (choice == 2)
        {
            // declaring variables used for choice 2
            char first_array[10], second_array[10];
            // get user input string and store in first_array
            cout << "\n\tEnter a string: ";
            cin >> first_array;
            cout << "\tThe first array is:  " << first_array;
            // loop to reverse a string
            // initialise i = 0 and j = length of string - 1
            for (int i = 0, j = strlen(first_array) - 1; i < strlen(first_array); i++, j--)
            {
                // store value at first_array[j] into second_array[i]
                second_array[i] = first_array[j];
            }
            // printing reversed string
            cout << "\n\tAfter reversing" << endl;
            cout << "\tThe second array is: " << second_array << endl;
        }
        // if choice is equal to 3
        else if (choice == 3)
        {
            // declaring variables used for choice 3
            int hrs, rate, salary;
            // get user input hours
            cout << "\n\tEnter hours worked: ";
            cin >> hrs;
            // get user input rate
            cout << "\tEnter hourly rate of the work: ";
            cin >> rate;
            // if hours is greater than 40
            if (hrs > 40)
            {
                // then hrs * rate plus extra hours multiplie by half of rate
                // i.e (hrs - 40) * (rate / 2)
                salary = hrs * rate + (hrs - 40) * (rate / 2);
            }
            else
            {
                salary = hrs * rate;
            }
            // print salary
            cout << "\n\tSalary is $" << salary << endl;
        }
        // exit loop if choice is equal to 4
        // if any other input then print the same menu
    } while (choice != 4);
    return 0;
}