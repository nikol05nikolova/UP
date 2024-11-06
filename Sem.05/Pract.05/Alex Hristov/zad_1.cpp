// UP_Sem_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

const int n = 1000;

//double averageArr(int arr[], int n) {
//	if (arr == NULL) {
//		return;
//	}
//	double average = 0;
//	for (int i = 0; i < n;i++) {
//		average += arr[i];
//	}
//
//	average /= n;
//	return average;
//
//	
//	
//}
//int closestToAverage(int arr[],int n) {
//	double average = averageArr(arr,n);
//	int closestToAverage = arr[0];
//	for (int j = 0; j < n; j++) {
//		if (abs(average - arr[j]) < abs(average - closestToAverage)) {
//			closestToAverage = arr[j];
//		}
//	}
//	
//	return closestToAverage;
//}

//int maxEl(int a[], int n) {
//	
//	int max = a[0];
//	for (int i = 1; i < n;i++) {
//		if (a[i]>max) {
//			max = a[i];
//		}
//		
//	}
//	return max;
//}
//int minEl(int a[], int n) {
//	int min = a[0];
//	
//	for (int i = 1; i < n; i++) {
//		
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//	return min;
//}
void removeElement(int arr[], int n, int k) {
	const int capacity = n - 1;
	for (int i = 0; i < n-1;i++) {
		if (i >= k) {
			arr[i] = arr[i + 1];
		}
		
	}
	for (int i = 0; i < capacity; i++) {
		cout << " " << arr[i];
	}

}
int main()
{
	int n, k;
	cout << "Enter length of arr:";
	cin >> n;
	cout << "Enter index:";
	cin >> k;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	removeElement(arr, n,k);
	/*cout << "Min element:" << minEl(arr, n)<<endl;
	cout << "Max element:" << maxEl(arr, n)<<endl;*/
	/*cout<<"Average:" <<averageArr(arr, n)<<endl;
	cout << "Closest To Average element:" << closestToAverage(arr, n)<<endl;*/

}
