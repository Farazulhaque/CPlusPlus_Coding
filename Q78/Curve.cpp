#include <iostream>

using namespace std;

void applyCurve(int &score1, int &score2, int &score3, int curve);

int main()
{
	int score1, score2, score3, largest, curve;
	cout << "Enter three scores out of 100: ";
	cin >> score1;
	cin >> score2;
	cin >> score3;
	largest = score1;
	if (largest < score2)
	{
		largest = score2;
	}
	if (largest < score3)
	{
		largest = score3;
	}
	curve = 100 - largest;
	cout << "The curve is " << curve << endl;
	applyCurve(score1, score2, score3, curve);
	cout << "The scores after applying the curve are " << score1 << ", " << score2 << ", " << score3 << ".";
	return 0;
}
void applyCurve(int &score1, int &score2, int &score3, int curve)
{
	score1 = score1 + curve;
	score2 = score2 + curve;
	score3 = score3 + curve;
}