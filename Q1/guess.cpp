#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)

{
    srand(time(NULL)); // Won't repeat the same number each try.

    bool uguess = true;
    while (uguess == true)
    {
        // Main loop
        //Declare variables

        int num = rand() % 9 + 2; //System number variable.
        int guess;                // User guess variable.
        int tries = 0;            // Number of tries variable set to 0 to track how many attempts the user makes.
        char ans;                 // User answer to question variable.
        bool loop = true;
        bool choice = true;

        while (loop == true)
        {
            // Get user number nested while.
            // Get number.
            cout << " Enter a number between 1 and 10: ";
            cin >> guess;

            // Check number.
            if (guess > num)
            {
                //if user guess is higher than the number output this message.
                cout << " This number is too high! Please try again! \n";
                loop = true;
                tries++;
            }

            else if (guess < num)
            {
                //if user guess is lower than the number output this message.
                cout << " This number is too low! Please try again! \n";
                loop = true;
                tries++;
            }
            else if (guess == num)
            {
                // Or, user won.
                cout << " Congratulations, you are the ultimate champion! \n";
                cout << " The number the computer selected was: " << num << " \n";          //Show number the computer selected to user
                cout << " You guessed the correct number in " << tries + 1 << " tries! \n"; //Show how many guesss +1 since starts at 0
                loop = false;
            }
        }
        // If the input number is wrong, increment the tries.

        while (choice == true)

        {
            // Loop to ask user is he/she would like to play again.
            // Get user response
            cout << " Would you like to play the game again? Enter Y or N: ";
            cin >> ans;

            // Input validation
            if (ans == 'n' || ans == 'N')
            {
                cout << " Thank you for playing! ";
                choice = false;
                uguess = false;
            }

            else if (ans == 'Y' || ans == 'y')
            {
                choice = false;
                uguess = true;
                cout << "\n";
            }
            else
            {
                choice = true;
                cout << " Please enter \'Y \' or \'N \n";
            }
        }
    }
}