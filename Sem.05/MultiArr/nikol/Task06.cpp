bool isMagicSquare(int matrix[N][N])
{
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += matrix[0][i];
	}
	int sumRow = 0, sumCol = 0, sumDiag = 0, sumReverseDiag = 0;
	for (int i = 0; i < N; i++)
	{
		sumDiag += matrix[i][i];
		sumReverseDiag += matrix[i][N - 1 - i];
		for (int j = 0; j < N; j++)
		{
			sumRow += matrix[i][j];
			sumCol += matrix[j][i];
		}
		if (sumRow != sum || sumCol != sum)
		{
			return false;
		}
		sumRow = 0;
		sumCol = 0;
	}
	if (sumDiag != sum || sumReverseDiag != sum)
	{
		return false;
	}
	return true;
}
