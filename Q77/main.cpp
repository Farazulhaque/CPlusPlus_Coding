#include <iostream>

using namespace std;

void fillArr(int *pVisitors, int &counter);
void displayArr(int *Visitors, int *pCounter);
void displayLowest(int *Visitors, int *pCounter);
void displayHighest(int *Visitors, int *pCounter);

int main()
{
	const int SIZE = 10;
	int arrVisitors[SIZE];
	int counter = 0;
	fillArr(arrVisitors, counter);

	while (arrVisitors[counter] != -1 && counter < SIZE)
	{
		counter++;
		fillArr(arrVisitors, counter);
	}

	cout << "\nList of visitors per day" << endl;
	for (int k = 0; k < counter; k++)
	{
		displayArr(arrVisitors, &k);
	}
	// Initialise variables
	int lowest = arrVisitors[0];
	int lowest_day = 0;
	int highest = arrVisitors[0];
	int highest_day = 0;

	for (int k = 0; k < counter; k++)
	{
		if (arrVisitors[k] < lowest)
		{
			lowest = arrVisitors[k];
			lowest_day = k;
		}
		if (arrVisitors[k] > highest)
		{
			highest = arrVisitors[k];
			highest_day = k;
		}
	}
	displayLowest(arrVisitors, &lowest_day);
	displayHighest(arrVisitors, &highest_day);
	return 0;
}

void fillArr(int *pVisitors, int &counter)
{
	cout << "Enter the number of visitors for day " << (counter + 1) << ": ";
	cin >> pVisitors[counter];
}
void displayArr(int *Visitors, int *pCounter)
{
	cout << "Day " << (*pCounter + 1) << ": " << Visitors[*pCounter] << endl;
}

void displayLowest(int *Visitors, int *pCounter)
{
	cout << "\nDay with the least number of visitors is day " << (*pCounter + 1) << " with " << Visitors[*pCounter] << " visitors" << endl;
}
void displayHighest(int *Visitors, int *pCounter)
{
	cout << "\nDay with the most number of visitors is day " << (*pCounter + 1) << " with " << Visitors[*pCounter] << " visitors" << endl;
}