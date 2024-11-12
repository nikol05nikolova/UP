int findSmallest(int arr[3][3])
{
    int smallest = arr[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] < smallest)
			{
				smallest = arr[i][j];
			}
		}
	}
	return smallest;
}
