#include <iostream>
using namespace std;

// Function prototypes:

void getValues(double &l, double &w);

float computeArea(double, double);

void printArea(double);

int main()
{
	double length, width, area;

	cout << "This program computes the area of a rectangle." << endl;
	cout << "You will be prompted to enter both the length and width.";
	cout << endl
		 << "Enter a real number (such as 7.88 or 6.3) for each.";
	cout << endl
		 << "The program will then compute and print the area.";
	cout << endl;

	// call function getValues(length, width) here
	getValues(length, width);
	// call function computeArea(length, width) here
	area = computeArea(length, width);
	// call function printArea(area) here
	printArea(area);

	return 0;
}

/*
   Purpose:  To ask the user for the length and width of a rectangle and
			 to return these values via the two parameters.
   Return:   Length   The length entered by the user.
			 Width    The width entered by the user.
*/

void getValues(double &l, double &w)
{
	cout << "Enter Length: ";
	cin >> l;
	cout << "Enter Width: ";
	cin >> w;
	// add code to get Length and Width
}

/* Given:  Length   The length of the rectangle.
		   Width    The width of the rectangle.
   Purpose:   To compute the area of this rectangle.
   Return: The area in the function name.
*/

float computeArea(double l, double w)
{
	// add code to compute area
	return l * w;
}

/* Given:  Area    The area of a rectangle.
   Purpose:   To print Area.
   Return: Nothing.
*/
void printArea(double a)
{
	cout << "The area of rectangle is " << a;
	// add code to print area of the rectangle
}