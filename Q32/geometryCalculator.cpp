#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of the Circle" << endl;
    cout << "2. Calculate the Area of the Rectangle" << endl;
    cout << "3. Calculate the Area of the Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        float r;
        cout << "Enter radius of the circle: ";
        cin >> r;
        if (r < 0)
        {
            cout << "The radius can not be less than 0.";
        }
        else
        {
            area = 3.14159 * r * r;
            cout << "The area is: " << area;
        }
        break;
    case 2:
        float length, width;
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
        if (length < 0 || width < 0)
        {
            cout << "Only enter positive values for length and width.";
        }
        else
        {
            area = length * width;
            cout << "The area is: " << area;
        }
        break;
    case 3:
        float base;
        float height;
        cout << "Enter Base: ";
        cin >> base;
        cout << "Enter Height: ";
        cin >> height;
        if (base < 0 || height < 0)
        {
            cout << "Only enter positive values for length and width.";
        }
        else
        {
            area = base * height * 0.5;
            cout << "The area is: " << area;
        }
        break;
    case 4:
        cout << "Quitting...";
        break;
    default:
        cout << "Invalid input.";
        break;
    }
    return 0;
}
