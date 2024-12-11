#include <iostream>
using namespace std;
const int ASCII_MAX_SIZE = 128;

int length(char* arr)
{
	if (arr == nullptr)
	{
		return -1;
	}

	int lenght = 0;

	while (*arr != '\0')
	{
		lenght++;
		arr++;
	}

	return lenght;
}

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
//int CheckStr(char* text)
//{
//	int len = length(text);
//	const int MIN_LEN = 2;
//
//	if (text == nullptr || len < MIN_LEN)
//	{
//		return -1;
//	}
//
//	int odd = 0;
//
//	for (size_t i = 0; i < len; i++)
//	{
//		char sym = text[i];
//		int counter = 0;
//		for (size_t j = 0; j < len; j++)
//		{
//			if (text[j] == sym)
//			{
//				counter++;
//			}
//
//		}
//		if (length(text) % 2 == 0 && counter % 2 != 0)
//		{
//			return 0;
//		}
//
//		if (length(text) % 2 != 0 && counter % 2 != 0)
//		{
//			odd++;
//		}
//	}
//
//	if (odd > 1)
//	{
//		return 0;
//	}
//
//	return 1;
//}

//5
void CheckStr(char* text, char* result)
{
	if (text == nullptr)
	{
		cout << "not valid";
		return;
	}

	int testLength = length(text);

	int ascii[ASCII_MAX_SIZE] = { 0 };
	for (size_t i = 0; i < testLength; i++)
	{
		ascii[text[i]]++;
	}

	int index = 0;
	for (size_t i = 0; i < ASCII_MAX_SIZE; i++)
	{
		if (ascii[i] >= 2)
		{
			result[index] = i;
			index++;
		}
	}
	result[index] = '\0';

}

int main()
{
	char text[] = "aif8sltt8f";
	char result[] = "aif8sltt8f";
	CheckStr(text,result);
	cout << result;
}
