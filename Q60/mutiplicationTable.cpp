#include <iostream>
#include <iomanip>
using namespace std;

const unsigned short rowNum = 9;
const unsigned short colNum = 9;

// stores the 81 numbers in a 2D array without displaying them on screen.
void setUpTable(int table[rowNum][colNum])
{
    unsigned short row, column;
    for (row = 1; row <= rowNum; row++)
    {
        for (column = 1; column <= colNum; column++)
        {
            table[row - 1][column - 1] = row * column;
        }
    }
}

// displays on screen the content of the multiplication table from the array.
void displayTable(int table[rowNum][colNum])
{
    unsigned short row, column;
    for (row = 1; row <= rowNum; row++)
    {
        for (column = 1; column <= colNum; column++)
        {
            cout << setw(6) << table[row - 1][column - 1];
        }
        cout << endl;
    }
}

int main()
{
    const unsigned short rowNum = 9, colNum = 9;
    unsigned short row, column;
    int table[rowNum][colNum];
    cout << "\n              The Standard Multiplication Table\n"
         << "\n***********************************************************\n\n";

    setUpTable(table);

    displayTable(table);

    cout << "\n***********************************************************\n\n";

    return 0;
}
