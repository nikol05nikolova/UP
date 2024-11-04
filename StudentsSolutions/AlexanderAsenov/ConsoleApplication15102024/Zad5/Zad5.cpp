// Zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4, num5;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	bool num2IsGood = (num2 > num1 && num2 > num3) || (num2 < num1 || num2 < num3);
	bool num3IsGood = (num3 > num2 && num3 > num4) || (num2 < num2 || num3 < num4);
	bool num4IsGood = (num4 > num3 && num4 > num5) || (num4 < num3 || num4 < num5);

	if (num2IsGood && num3IsGood && num4IsGood) {
		cout << "yes";
	}
	else {
		cout << "no";
	}


}