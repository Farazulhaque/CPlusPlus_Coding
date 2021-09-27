#include <iostream>
using namespace std;

double sumAll(double arr[]);
double findMax(double arr[]);
void copy(double arr1[], double arr2[]);
int main()
{
    double arr[10], new_arr[10];
    double sum, maximum;
    cout << "Enter 10 values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }

    sum = sumAll(arr);
    cout << "\nSum of all elements in the array are: " << sum << endl;

    maximum = findMax(arr);
    cout << "\nMaximum value in the array is " << maximum << endl;

    copy(arr, new_arr);
    cout << "\nArray 1 elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nArray 2 elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << new_arr[i] << " ";
    }
    return 0;
}

double sumAll(double arr[])
{
    double sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double findMax(double arr[])
{
    double max = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void copy(double arr1[], double arr2[])
{
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i];
    }
}

