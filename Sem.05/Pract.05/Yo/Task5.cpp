#include <iostream>
#include "input.h"

bool isSymmetrical(int* arr, int arrSize) {
	int midPoint = arrSize / 2;
	for (int i = 1; i < arrSize; ++i) {
		if (i >= midPoint && arr[i] != arr[arrSize - i - 1]) return false;
	}
	return true;
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	std::cout << isSymmetrical(arr, arrSize);
	delete[] arr;
	return 0;
}