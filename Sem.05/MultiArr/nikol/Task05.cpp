void Transposition(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int change = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = change;
		}
	}
}

void printMatrix(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
