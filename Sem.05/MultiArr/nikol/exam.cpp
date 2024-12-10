//1
bool AnalyzeArr(int* arr, int length)
{
	if (arr == nullptr || length <= 0)
	{
		return false;
	}

	int counter = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] = i)
		{
			counter++;
		}
	}

	if (counter >= 2)
	{
		return true;
	}

	return false;
}

//2

int length(char* arr)
{
	int lenght = 0;

	while (*arr != '\0')
	{
		lenght++;
		arr++;
	}

	return lenght;
}

int CheckStr(char* text)
{
	if (text == nullptr || length(text) < 2)
	{
		return -1;
	}

	int odd = 0;

	for (size_t i = 0; i < length(text); i++)
	{
		char sym = text[i];
		int counter = 0;
		for (size_t j = 0; j < length(text); j++)
		{
			if (text[j] == sym)
			{
				counter++;
			}

		}
		if (length(text) % 2 == 0 && counter % 2 != 0)
		{
			return 0;
		}

		if (length(text) % 2 != 0 && counter % 2 != 0)
		{
			odd++;
		}
	}

	if (odd > 1)
	{
		return 0;
	}

	return 1;
}


int main()
{
	char arr[] = "bllbhf";
	cout << CheckStr(arr);
}
