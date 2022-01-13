#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Input the number of elements to store in the array: ";
    cin >> size;

    int arr[size];
    cout << "Input " << size << " number of elements in the array: " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The values store into the array are: " << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nThe values store into the array in reverse are: " << endl;
    for (i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}