#include <iostream>
#include <iomanip>

using namespace std;

void calculateAvaerage(double scores[], int size);
int main()
{
    int size;
    cout << "How many test scores will you enter? ";
    cin >> size;
    double scores[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> scores[i];
        while (scores[i] < 0)
        {
            cout << "Negative scores are not allowed." << endl;
            cout << "Enter another score for this test: ";
            cin >> scores[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << scores[i] << endl;
    // }

    calculateAvaerage(scores, size);
    return 0;
}

void calculateAvaerage(double scores[], int size)
{
    double total = 0;
    cout << "\nScore\n-----\n"
         << endl;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
        cout << fixed << setprecision(2) << scores[i] << endl;
    }
    double avg = total / size;
    cout << endl;
    cout << "Average score: " << avg;
}