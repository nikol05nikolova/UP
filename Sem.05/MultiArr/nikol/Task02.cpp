void printDiagonals(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		cout << matrix[i][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		cout << matrix[i][N - 1 - i] << " ";
	}
}
