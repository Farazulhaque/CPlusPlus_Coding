#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3;

    cout << "Enter thre sides: ";
    cin >> s1;
    cin >> s2;
    cin >> s3;
    if (s1 * s1 == (s2 * s2) + (s3 * s3))
        cout << "is a Right Angled Triangle.";

    if (s2 * s2 == (s1 * s1) + (s3 * s3))
        cout << "is a Right Angled Triangle.";

    if (s3 * s3 == (s2 * s2) + (s1 * s1))
        cout << "is a Right Angled Triangle.";

    else
        cout << "is not a Right Angled Triangle.";
}