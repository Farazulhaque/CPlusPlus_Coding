#include <iostream>
using namespace std;

void sortAscending(double scores[], int size);
double calculateAverage(double scores[], int size);
int main()
{
    int size, average;
    cout << "Enter array size: ";
    cin >> size;
    double scores[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
        while (scores[i] < 0)
        {
            cout << "Invalid score. ";
            cout << "Enter score " << i + 1 << ": ";
            cin >> scores[i];
        }
    }
    sortAscending(scores, size);
    average = calculateAverage(scores, size);
    cout << "\nAverage score is " << average;
    return 0;
}

void sortAscending(double scores[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (scores[i] > scores[j])
            {
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
    }
    //print sorted array elements
    cout << "\nSorted (Ascending Order) Array elements: [";
    for (int i = 0; i < size; i++)
    {
        cout << scores[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << "]";
}

double calculateAverage(double scores[], int size)
{
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        average += scores[i];
    }
    average = average / size;
    return average;
}
