void printZigZag(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i % 2 == 0)
			{
				cout << matrix[i][j] << " ";
			}
			else
			{
				cout << matrix[i][N - 1 - j] << " ";
			}
		}
		cout << endl;
	}
}
