#include <iostream>
using namespace std;

int abs(int num)
{
    return fabs(num);
}
double fabs(double num)
{
    return num >= 0
        ? num
        : -num;
}
int main()
{
    int integer;
    double floatingNum;
    cin >> integer >> floatingNum;

    cout << abs(integer) << endl << fabs(floatingNum);

    return 0;
}