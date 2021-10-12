#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "How many students? ";
    cin >> n;
    string students[n];
    int points[n];

    cout << "How many courses? ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int total = 0;
        string stud;
        int point;
        cout << "\nEnter name of student: ";
        cin >> stud;
        for (int j = 0; j < m; j++)
        {
            do
            {
                cout << "Enter points of student " << stud << ": ";
                cin >> point;
            } while (point > 100 || point <= 0);
            total += point;
        }

        points[i] = total;
        students[i] = stud;
    }

    cout << "Total points of each student are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << students[i] << ": " << points[i] << endl;
    }

    int pointstemp;
    string studenttemp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (points[i] < points[j])
            {
                pointstemp = points[i];
                points[i] = points[j];
                points[j] = pointstemp;

                studenttemp = students[i];
                students[i] = students[j];
                students[j] = studenttemp;
            }
        }
    }

    cout << "Total points of each student in ascending order are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << students[i] << ": " << points[i] << endl;
    }
    return 0;
}