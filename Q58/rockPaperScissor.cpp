#include <iostream>

// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;

char getComputerOption()
{
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;

    if (num == 1)
        return 'r';
    else if (num == 2)
        return 'p';
    else
        return 's';
}

char getUserOption()
{
    char c;

    cout << "Choose one of the following options" << endl;
    cout << "-----------------------------------" << endl;
    cout << "(r) for rock " << endl
         << "(p) for paper" << endl
         << "(s) for scissors " << endl;
    cout << "Enter your choice: ";
    cin >> c;

    while (c != 'r' && c != 'p' && c != 's')
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl
             << "(p) for paper" << endl
             << "(s) for scissors " << endl;
        cout << "Enter your choice: ";
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option)
{
    if (option == 'r')
        cout << "Rock" << endl;
    if (option == 'p')
        cout << "Paper" << endl;
    if (option == 's')
        cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice, int &compWin, int &uWin)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
        compWin++;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
        compWin++;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
        compWin++;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You Win! Rock smashes Scissors." << endl;
        uWin++;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You Win! Paper wraps Rock." << endl;
        uWin++;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You Win! Scissors cut Paper." << endl;
        uWin++;
    }
    else
    {
        cout << "Tie. Play again win the Game." << endl;
    }
}

int main()
{
    //User's choice
    char uChoice;
    //Compter's choice
    char cChoice;
    cout << "Rock, Paper and Scissors Game!" << endl;
    int compWin = 0, uWin = 0;
    while (compWin < 3 && uWin < 3)
    {
        uChoice = getUserOption();
        cout << "\n------------------------------" << endl;

        cout << "Your choice is       : ";
        showSelectedOption(uChoice);

        cChoice = getComputerOption();
        cout << "Computer's choice is : ";
        showSelectedOption(cChoice);
        cout << "------------------------------" << endl;

        chooseWinner(uChoice, cChoice, compWin, uWin);
        cout << "------------------------------" << endl;
        cout << "Computer wins : " << compWin << " times" << endl;
        cout << "You wins      : " << uWin << " times" << endl;
        cout << "------------------------------\n"
             << endl;
    }
    cout << "***********Game Over**********" << endl;
    cout << "==============================" << endl;
    cout << "Computer wins : " << compWin << " times" << endl;
    cout << "You wins      : " << uWin << " times" << endl;
    cout << "==============================" << endl;

    return 0;
}