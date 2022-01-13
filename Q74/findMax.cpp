#include <iostream>
using namespace std;

int main()
{
    int size, i;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> size;

    int arr[size];
    cout << "Input " << size << " number of elements in the array: " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Maximum element is: " << max;

    return 0;
}