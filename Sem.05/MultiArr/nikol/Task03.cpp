void printZigZag(int matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i % 2 == 0)
			{
				cout << matrix[i][j] << " ";
			}
			else
			{
				cout << matrix[i][2-j] << " ";
			}
		}
		cout << endl;
	}
}
