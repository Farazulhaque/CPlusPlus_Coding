#include <iostream>
using namespace std;

int main()
{
    int first, matrix[4][4], temp, choice, swapped[4][4], t;
    cout << "Enter first element of the matrix: ";
    cin >> first;
    cout << "\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 && j == 0)
                matrix[i][j] = first;
            else
                matrix[i][j] = temp + 4;
            temp = matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "\t";
            cout << matrix[i][j];
        }
        cout << "\n";
    }

    cout << "\n Chose one of the following: \n";
    cout << "1) Swapping the main diagonal with the secondary diagonal.\n";
    cout << "2) Multiply the matrix by 3.\n";
    cout << "3) Exit \n\n";
    cin >> choice;

    if (choice == 1)
    {
        t = matrix[0][0];
        matrix[0][0] = matrix[0][3];
        matrix[0][3] = t;

        t = matrix[1][1];
        matrix[1][1] = matrix[1][2];
        matrix[1][2] = t;

        t = matrix[2][2];
        matrix[2][2] = matrix[2][1];
        matrix[2][1] = t;

        t = matrix[3][3];
        matrix[3][3] = matrix[3][0];
        matrix[3][0] = t;

        cout << "\n The new matrix is: \n\n";
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "\t";
                cout << matrix[i][j];
            }
            cout << "\n";
        }
    }
    else if (choice == 2)
    {
        cout << "\n The new matrix is: \n\n";
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                matrix[i][j] = matrix[i][j] * 3;
                cout << "\t";
                cout << matrix[i][j];
            }
            cout << "\n";
        }
    }
    else if (choice == 3)
    {
        break;
    }
    else
    {
        cout << "Invalid Choice.";
    }
    return 0;
}