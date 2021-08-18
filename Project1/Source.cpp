#include <iostream>

using namespace std;

int main()
{
	int number, i, j, k;
	cout << "Enter a positive odd integer(>3): ";
	cin >> number;

	//Input Validation
	while ((number % 2 == 0) || (number < 3))
	{
		cout << "Invalid Input!!\n";
		cout << "Enter a positive odd integer(>3): ";
		cin >> number;
	}
	k = number - 1;

	//code for Diamond Shape
	for (i = 0; i < number; i = i + 2)
	{
		for (j = 0; j < k; j = j + 2)
		{
			cout << " ";
		}
		for (j = 0; j <= i; j = j + 2)
		{
			cout << "* ";
		}
		cout << endl;
		k = k - 2;
	}
	k = 0;
	for (i = number - 2; i > 0; i = i - 2)
	{
		cout << " ";
		for (j = 0; j < k; j = j + 2)
		{
			cout << " ";
		}
		for (j = 0; j < i; j = j + 2)
		{
			cout << "* ";
		}
		cout << endl;
		k = k + 2;
	}
	return 0;
}