int minAndMax(int arr[], int arrSize, int& max)
{
	int min = arr[0];
	max = arr[0];
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return min;
}
