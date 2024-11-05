// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i = num; i > 1; i--)
	{

		if (num % i == 0) {

			bool isPrime = true;


			switch (i)
			{
			case 0:
			case 1:
				isPrime = false;
				break;
			default:

				for (int j = 2; j <= sqrt(i); j++)
				{
					if (i % j == 0) {
						isPrime = false;
						break;
					}
					
				}

				if (isPrime) {
					int numberDivisibleCount = 0;
					int n = num;

					while (n % i == 0) {
						n /= i;
						numberDivisibleCount++;
					}

					cout << i << "^" << numberDivisibleCount << " ";
				}
				break;
			}
		}
	}
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
