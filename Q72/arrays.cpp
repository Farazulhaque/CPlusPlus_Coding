#include <iostream>
using namespace std;
#define ARR_SIZE 6

void ReadItems(int arr[]);
void PrintItems(int arr[]);
int MaxItem(int arr[]);
void PrintInReverse(int arr[]);
int SumArray(int arr[], int start, int end);
int main()
{
    int items[ARR_SIZE];
    // cout << ARR_SIZE;

    cout << "Reading array elements" << endl;
    ReadItems(items);
    cout << "Printing array elements" << endl;
    PrintItems(items);
    cout << "The max item is " << MaxItem(items) << endl;
    cout << "Printing array elements in reverse " << endl;
    PrintInReverse(items);
    cout << endl;
    int start = 0;
    int end = ARR_SIZE / 2;
    cout << "Sum of the first half: ";
    int firstHalf = SumArray(items, start, end);
    cout << firstHalf << endl;

    start = end;
    end = ARR_SIZE;
    cout << "Sum of the second half: ";
    int secondHalf = SumArray(items, start, end);
    cout << secondHalf << endl;

    if (firstHalf == secondHalf)
    {
        cout << "This array is Symmetric" << endl;
    }
    else
    {
        cout << "This array is not Symmetric" << endl;
    }
    return 0;
}

void ReadItems(int arr[])
{
    static int i = 0;
    if (i == ARR_SIZE)
    {
        i = 0;
        return;
    }

    cin >> arr[i];
    i++;
    ReadItems(arr);
}

void PrintItems(int arr[])
{
    static int i = 0;
    if (i == ARR_SIZE)
    {
        i = 0;
        cout << endl;
        return;
    }

    cout << arr[i] << " ";
    i++;
    PrintItems(arr);
}

int MaxItem(int arr[])
{
    static int i = 1;
    static int max = arr[0];
    if (i == ARR_SIZE)
    {
        i = 0;
        return max;
    }
    if (max < arr[i])
    {
        max = arr[i];
    }
    i++;
    MaxItem(arr);
    return max;
}

void PrintInReverse(int arr[])
{
    static int i = ARR_SIZE - 1;
    if (i == -1)
    {
        i = 0;
        return;
    }
    cout << arr[i] << " ";
    i--;
    PrintInReverse(arr);
}

int SumArray(int arr[], int start, int end)
{
    int sum = arr[start];
    if (start != end){
        start++;
        sum += arr[start];
    }
    return sum;
}
