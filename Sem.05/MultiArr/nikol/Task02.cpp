void printDiagonals(int matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << matrix[i][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << matrix[i][2 - i] << " ";
	}
}
