#include <iostream>
using namespace std;

int main()
{
    int size, order, temp;
    // get size of the array
    cin >> size;
    // get order of the array (1 for ascending and 2 for descending)
    cin >> order;
    // create two array of same size to comapare after sorting
    int unsorted_array[size], sorted_array[size];
    for (int i = 0; i < size; i++)
    {
        // store numbers in an array
        cin >> unsorted_array[i];
        sorted_array[i] = unsorted_array[i];
    }

    // if ascending order
    if (order == 1)
    {
        // Loop to sort the numbers
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                // Check if number at i is greater than number at j position
                if (unsorted_array[i] > unsorted_array[j])
                {
                    // store the value at i-th position into temp variable
                    temp = unsorted_array[i];
                    // replace the array with the number at j
                    unsorted_array[i] = unsorted_array[j];
                    // and then put value of temp variable into j-th position
                    unsorted_array[j] = temp;
                }
            }
        }
        // To check if the numbers are already sorted or not
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            // if not sorted then flag = 1
            if (unsorted_array[i] != sorted_array[i])
            {
                flag = 1;
            }
        }
        // check condition if flag == 1, means not sorted
        if (flag == 1)
        {
            // Then print the sorted numbers
            for (int i = 0; i < size; i++)
                cout << unsorted_array[i];
        }
        // else print already sorted
        else
        {
            cout << "Already sorted";
        }
    }

    // if descending order
    else if (order == 2)
    {
        // Loop to sort the numbers
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                // Check if number at i is less than number at j position
                if (unsorted_array[i] < unsorted_array[j])
                {
                    // store the value at i-th position into temp variable
                    temp = unsorted_array[i];
                    // replace the array with the number at j
                    unsorted_array[i] = unsorted_array[j];
                    // and then put value of temp variable into j-th position
                    unsorted_array[j] = temp;
                }
            }
        }
        // To check if the numbers are already sorted or not
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            // if not sorted then flag = 1
            if (unsorted_array[i] != sorted_array[i])
            {
                flag = 1;
            }
        }
        // check condition if flag == 1, means not sorted
        if (flag == 1)
        {
            // Then print the sorted numbers
            for (int i = 0; i < size; i++)
                cout << unsorted_array[i];
        }
        // else print already sorted
        else
        {
            cout << "Already sorted";
        }
    }

    // If number other than 1 and 2 (ascending or descending order)
    else
    {
        cout << "Wrong entry";
    }

    return 0;
}




