//Guessing game code to modify
//Modify this code as specified in the part 1 instructions
#include <iostream>
using namespace std;

int main()
{
    int secretNumber, guessNumber;
    cout << "Welcome to Prof. Erickson's super secret number guessing game." << endl;
    cout << "First, player 1 will enter a secret number between 1 and 100." << endl;
    cout << "Then, player 2 will try to guess the secret number." << endl;
    cout << "Player 1, please enter the secret number for Player 2 to guess." << endl;
    cout << "The number needs to be a whole number between 1 and 100." << endl;
    cin >> secretNumber;
    //check to make sure Player 1's number is between 1 and 100
    //if not, nag Player 1 to enter an acceptable number
    while (secretNumber > 100 || secretNumber < 1)
    {
        cout << "Error: that number is not between 1 and 100."
             << "\nEnter a number between 1 and 100: ";
        cin >> secretNumber;
    }
    //output 5 newlines to "clear" screen
    //this prevents Player 2 from seeing secret number
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
    }
    cout << "The secret number has been entered.\n"
         << "Player 2, guess the number:" << endl;
    cin >> guessNumber;
    int count = 1;
    while ((count < 7) && (guessNumber != secretNumber))
    {
        if (guessNumber > secretNumber)
            cout << "\nNo. Guess a lower number:\n";
        else
            cout << "\nNo. Guess a higher number:\n";
        count++;
        cin >> guessNumber;
    }
    if ((count <= 7) && (guessNumber == secretNumber))
    {
        cout << "\n\nCongratulations! Player 2 wins!";
        cout << "\nYou guessed it in " << count << " tries!";
    }
    else
    {
        cout << "\n\nPlayer 2 loses. Better luck next time!";
        cout << "\nYou didn't guess the number in 7 tries.";
    }
    return 0;
}
