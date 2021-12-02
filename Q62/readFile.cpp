#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myfile;
    string myline;
    myfile.open("myFile.txt");
    if (myfile.is_open())
    {
        while (myfile)
        {
            int i = 0;
            while (getline(myfile, myline, ';'))
            {
                cout << myline << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Couldn't open file\n";
    }
}