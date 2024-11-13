bool isTriangle(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i>j)
			{
				if (matrix[i][j]!=0)
				{
					return false;
				}
			}
		}
	}
	return true;
}
