// zad19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned int n) {
    if (n == 0 || n == 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void writePrimes(int n) {
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
}

bool canBeSumOfPrimes(int n){
    for (int i = 2; i <= n / 2.0; i++)
    {
        if (isPrime(i) && isPrime(n - i) && i != n - i) {
            return true;
        }
    }

    return false;
}


int main()
{
    unsigned int n;
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is prime" << endl;
    }
    else {
        cout << n << " is not prime" << endl;
    }

    writePrimes(n);

    if (canBeSumOfPrimes(n)) {
        cout << n << " is a sum of 2 primes" << endl;
    }
    else {
        cout << n << " is not a sum of 2 primes" << endl;
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
