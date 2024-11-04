// zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;

	int numOf0 = 0;
	int numOf1 = 0;
	int numOf2 = 0;
	int numOf3 = 0;
	int numOf4 = 0;
	int numOf5 = 0;
	int numOf6 = 0;
	int numOf7 = 0;
	int numOf8 = 0;
	int numOf9 = 0;

	while (num > 0) {
		int digit = num % 10;
		num /= 10;
		switch (digit) {
		case 0:
			numOf0++;
			break;
		case 1:
			numOf1++;
			break;
		case 2:
			numOf2++;
			break;
		case 3:
			numOf3++;
			break;
		case 4:
			numOf4++;
			break;
		case 5:
			numOf5++;
			break;
		case 6:
			numOf6++;
			break;
		case 7:
			numOf7++;
			break;
		case 8:
			numOf8++;
			break;
		case 9:
			numOf9++;
			break;
		}
	}

	int maxCount = numOf0;
	int max = 0;

	if (maxCount < numOf1) {
		maxCount = numOf1;
		int max = 0;
	}

	if (maxCount < numOf2) {
		maxCount = numOf3;
		int max = 2;
	}

	if (maxCount < numOf3) {
		maxCount = numOf3;
		max = 3;
	}

	if (maxCount < numOf4) {
		maxCount = numOf4;
		max = 4;
	}

	if (maxCount < numOf5) {
		maxCount = numOf5;
		max = 5;
	}

	if (maxCount < numOf6) {
		maxCount = numOf6;
		max = 6;
	}

	if (maxCount < numOf7) {
		maxCount = numOf7;
		max = 7;
	}

	if (maxCount < numOf8) {
		maxCount = numOf8;
		max = 8;
	}

	if (maxCount < numOf9) {
		maxCount = numOf9;
		max = 9;
	}

	cout << max;

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
