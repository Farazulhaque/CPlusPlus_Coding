#include <iostream>
#include <string>

using namespace std;
int addGrade();
int main()
{
    int choice;
    int grades[100], i = 0, count = 0;
    char addmore;
    double avg;
    do
    {
        cout << "\n1. Add a grade" << endl;
        cout << "2. View all previous entered grades" << endl;
        cout << "3. Calculate average of grades entered" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            do
            {
                grades[i] = addGrade();
                cout << "Do you want to add more?(y/n) ";
                cin >> addmore;
                i++;
                count++;
            } while (addmore == 'Y' || addmore == 'y');
        }
        else if (choice == 2)
        {
            int j = 0;
            cout << "The entered grades are: ";
            while (j < count)
            {
                cout << grades[j];
                if (j < count - 1)
                    cout << ", ";
                j++;
            }
            cout << endl;
        }
        else if (choice == 3)
        {
            int sum = 0, j = 0;
            while (j < count)
            {
                sum += grades[j];
                j++;
            }
            avg = sum / count;
            cout << "Average = " << avg << endl;
        }
    } while (choice != 4);
    return 0;
}
int addGrade()
{
    int grade;
    cout << "Enter grade: ";
    cin >> grade;
    return grade;
}
