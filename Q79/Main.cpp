#include <iostream>
using namespace std;

void MultiplyFactors(int val, int result)
{
	cout << val;
	result = result * val;

	if (val == 1)
	{
		cout << " = " << result;
	}
	else
	{
		cout << " * ";
		MultiplyFactors(val - 1, result);
	}
}

int main()
{
	MultiplyFactors(3, 1);
}