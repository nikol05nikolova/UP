// AreaOfAShape.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char shape;
	cin >> shape;

	const double PI = 3.1415;
	double area;

	switch (shape)
	{
	case 's':
		double sideSquare;
		cin >> sideSquare;

		area = sideSquare * sideSquare;
		break;

	case 'r':
		double side1, side2;
		cin >> side1;
		cin >> side2;

		area = side1 * side2;
		break;

	case 'c':
		double r;
		cin >> r;

		area = PI * r * r;
		break;
	case 't':
		double sideTriangle;
		double ha;

		cin >> sideTriangle;
		cin >> ha;

		area = (sideTriangle * ha) / 2;
		break;

	default:
		return 0;
		break;
	}

	cout << "The area is " << area << endl;

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
