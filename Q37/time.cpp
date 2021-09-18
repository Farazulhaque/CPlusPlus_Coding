#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds, elapsed;
    cout << "Input elapsed time in seconds: ";
    cin >> elapsed;

    hours = elapsed / 3600;
    minutes = (elapsed - (hours * 3600)) / 60;
    seconds = (elapsed - (hours * 3600) - (minutes * 60));
    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}