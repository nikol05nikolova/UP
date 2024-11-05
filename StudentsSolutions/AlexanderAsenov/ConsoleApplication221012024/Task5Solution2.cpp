// zad5Solution2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int mostCommonDigitCount = 0;
	int mostCommonDigit = 0;

	for (int currentDigit = 0; currentDigit < 10; currentDigit++)
	{
		int n = num;

		int currentDigitCount = 0;

		while(n > 0) {
			int digit = n % 10;

			if (digit == currentDigit) {
				currentDigitCount++;
			}

			n /= 10;
		}

		if (currentDigitCount > mostCommonDigitCount) {
			mostCommonDigit = currentDigit;
			mostCommonDigitCount = currentDigitCount;
		}
	}

	cout << mostCommonDigit << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
