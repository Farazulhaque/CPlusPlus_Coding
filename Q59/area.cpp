#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// #define M_PI 3.14
double sphere_area(double radius)
{
    return 4.0 * M_PI * radius * radius;
}
double sphere_volume(double radius)
{
    return 4.0 * M_PI * radius * radius * radius / 3.0;
}
double cylinder_area(double radius, double height)
{
    return 2.0 * M_PI * radius * (radius + height);
}
double cylinder_volume(double radius, double height)
{
    return M_PI * radius * radius * height;
}
double cone_area(double radius, double height)
{
    double slant_height = sqrt(radius * radius + height * height);
    return M_PI * radius * (radius + slant_height);
}
double cone_volume(double radius, double height)
{
    return M_PI * radius * radius * height / 3.0;
}

int main()
{
    string shape_types[] = {"sphere", "Cylinder With Fixed Radius",
                            "Cylinder With Fixed Height", "Cone With Fixed Radius",
                            "Cone With Fixed Height"};
    string dimension_type[] = {"in", "ft", "Ft", "mm", "MM", "cm", "CM", "m", "M"};
    int select = -1, digit_after_decimal, colWidth = 15, initial_value, ending_value,
        no_of_rows;
    double radius, height, area, volume,increment;

    while (1)
    {
        cout << "Select The Type Of Table You Want To Produce:\n";
        string shape = "";
        string unit = "";
        while (1)
        {
            cout << "Select The No. Corresponding To The Table You Want To Produce.\n";
            for (int i = 0; i < 5; i++)
            {
                cout << i + 1 << ". " << shape_types[i] << ".\n";
            }
            cin >> select;
            if (select < 1 || select > 5)
                cout << "No. Must Be Between 1 To 5.\n";
            else
                break;
        }
        if (select == 1)
            shape = "Sphere";
        else if (select <= 3)
            shape = "Cylinder";
        else
            shape = "Cone";
        while (1)
        {
            cout << "Enter the Type Of Dimension.\n";
            cin >> unit;
            for (int j = 0; j < unit.size(); j++)
            {
                unit[j] = tolower(unit[j]);
            }
            bool is_valid = false;
            for (int i = 0; i < 4; i++)
            {
                if (unit == dimension_type[i])
                    is_valid = true;
            }
            if (is_valid)
                break;
            else
                cout << "Enter A Valid Dimension.\n";
        }
        while (1)
        {
            cout << "Enter Initial Value, Ending Value, Increment Rate For Radius Or Height.\n";
            cin >> initial_value >> ending_value >> increment;
            if (initial_value <= 0.2 || ending_value <= 0 || increment <= 0.5)
            {
                cout << "Enter Valid Values for Initial Value, Ending Value, Increment.\n";
                continue;
            }
            no_of_rows = 1 + (ending_value - initial_value) / increment;
            if (no_of_rows >= 3 && no_of_rows <= 25)
                break;
            else
                cout << "Enter Valid Values for Initial Value, Ending Value, Increment.\n";
        }
        while (1)
        {
            cout << "Enter The Number Of Digits You Want After Decimal.\n";
            cin >> digit_after_decimal;
            if (digit_after_decimal < 0 || digit_after_decimal > 6)
            {
                cout << "Number Of Digits Must Be Between 0 to 6.\n";
            }
            else
                break;
        }
        cout << "\n\nData Table For Variation In Dimension Of " << shape << " With Dimension Unit in " << unit << ".\n";
        // Data Table For Displaying.

        cout << setfill('*') << setw(4 * colWidth) << "*" << endl;
        cout << setfill(' ') << fixed;
        cout << setw(colWidth) << "Radius" << setw(colWidth) << "Height" << setw(colWidth) << "Area" << setw(colWidth) << "Volume" << endl;
        cout << setfill('*') << setw(4 * colWidth) << "*" << endl;
        cout << setfill(' ') << fixed;
        radius = height = initial_value;
        while (no_of_rows > 0)
        {
            if (shape == "Sphere")
            {
                area = sphere_area(radius);
                volume = sphere_volume(radius);
            }
            else if (shape == "Cylinder")
            { //table for cylinder
                area = cylinder_area(radius, height);
                volume = cylinder_volume(radius, height);
            }
            else
            {
                area = cone_area(radius, height);
                volume = cone_volume(radius, height);
            }
            if (shape == "Sphere")
                height = 0; //table for sphere
            cout << setprecision(digit_after_decimal) << setw(colWidth) << radius << setprecision(digit_after_decimal) << setw(colWidth) << height << setw(colWidth) << area << setw(colWidth) << volume << endl;
            if (select == 1 || select == 2 || select == 4)
                radius += increment;
            else
                height += increment;
            no_of_rows--;
        }
        char y;
        cout << "Press Y to Continue.\n";
        cin >> y;
        if (y != 'Y')
            break;
    }
}