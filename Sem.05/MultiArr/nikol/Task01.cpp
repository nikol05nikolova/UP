int findSmallest(int arr[N][N])
{
    int smallest = arr[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i][j] < smallest)
			{
				smallest = arr[i][j];
			}
		}
	}
	return smallest;
}
