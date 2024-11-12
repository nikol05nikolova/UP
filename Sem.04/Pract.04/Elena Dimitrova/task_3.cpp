#include <iostream>
using namespace std;

void isPositive(int num) {
    if (num > 0) {
        cout << "Positive" <<  endl;
    } else {
        cout << "Not positive" <<  endl;
    }
}

void isNegative(int num) {
    num < 0 ? cout << "Negative" <<  endl : cout << "Not negative" <<  endl;
}

int main() {
    int num;
    cin >> num;
    isPositive(num);
    isNegative (num);


}