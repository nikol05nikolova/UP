int* removeAt(int arr[], int arrSize, int position)
{
	if (position <= 0 || position > arrSize) {
		cout << "Not valid" << endl;
		int newPosition;
		cin >> newPosition;
		position = newPosition;
	}

	for (int i = position - 1; i < arrSize - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	int* newArr = new int[arrSize - 1];

	for (int i = 0; i < arrSize - 1; i++)
	{
		newArr[i] = arr[i];
	}
	return newArr;
}
