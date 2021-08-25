#include <iostream>
// to get the time taken to execute the code
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // create array of size 6
    int win[6];

    time_t start, end;
    // start time counter
    time(&start);
    // loop from 0 to 9 to get the number from 0 to 9 on each window
    // that is why in each for loop we use same condition <= 9
    // outermost loop
    for (int i0 = 0; i0 <= 9; i0++)
    {
        for (int i1 = 0; i1 <= 9; i1++)
        {
            for (int i2 = 0; i2 <= 9; i2++)
            {
                for (int i3 = 0; i3 <= 9; i3++)
                {
                    for (int i4 = 0; i4 <= 9; i4++)
                    {
                        // innermost loop
                        for (int i5 = 0; i5 <= 9; i5++)
                        {
                            // now assign the value getting on each for loop to each window
                            // outermost loop is i[0] and outer most window is win[0]
                            win[0] = i0;
                            win[1] = i1;
                            win[2] = i2;
                            win[3] = i3;
                            win[4] = i4;
                            win[5] = i5;
                            // we use this loop to print the values
                            for (int j = 0; j < 6; j++)
                            {
                                cout << win[j];
                            }
                            // to get new line after each print
                            cout << "\n";
                        }
                    }
                }
            }
        }
    }
    // end time counter
    time(&end);
    // print time taken in seconds
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
