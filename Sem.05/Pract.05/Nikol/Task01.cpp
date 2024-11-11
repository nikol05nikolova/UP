double avrg(int arr[], int arrSize, int& closest)
{
	int sum = 0;
	for (int i = 0; i < arrSize; i++)
	{
		sum += arr[i];
	}
	double avr = (double)sum / arrSize;
	double minDifference;
	if (avr > arr[0])
	{
		minDifference = avr - arr[0];
	}
	else
	{
		minDifference = arr[0] - avr;
	}

	for (int i = 0; i < arrSize; i++)
	{
		double currentDifference;
		if (avr > arr[i])
		{
			currentDifference = avr - arr[i];
		}
		else
		{
			currentDifference = arr[i] - avr;
		}

		if (currentDifference < minDifference)
		{
			minDifference = currentDifference;
			closest = arr[i];
		}
	}

	return avr;
}
