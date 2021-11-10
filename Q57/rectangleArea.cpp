//Method-1 to structure User-defined function
#include <iostream>
using namespace std;

//This function prints a welcome message
void printMessage()
{
    cout << ".................Welcome..................." << endl;
    cout << "This Program prompts user for length and breadth" << endl;
    cout << "It then calculates the Area of the rectangle" << endl;
    cout << "And Prints out the area." << endl
         << endl;
    system("pause");
}

//This function gets length and breadth and process data by reference
void getData(int &length, int &breadth)
{
    cout << "\n---------------------------------\n";
    cout << "Please enter length" << endl;
    cin >> length;
    cout << "Please enter breadth" << endl;
    cin >> breadth;
    system("pause");
}

//This function calculates the area of the rectangle and process area by reference
void calcResult(int length, int breadth, int &area)
{
    area = length * breadth;
}
//This function prints the areas of the rectangle.
void printResult(int area)
{
    cout << "\n---------------------------------\n";
    cout << "The area is : " << area << endl;
    cout << "Program Ends!.." << endl
         << endl;
    system("pause");
}
int main()
{
    int length, breadth, area;         //Declare three integer variables
    printMessage();                    //Function call to print a welcome message.
    getData(length, breadth);          //Function call to get two data values
    calcResult(length, breadth, area); //Function call to calculate area
    printResult(area);                 //Function call to print the result i.e. area.
    return 0;
}
