#include <iostream>
using namespace std;

const size_t STR_MAX_LEN = 1024;

void strCpy(const char* src, char* dest)
{
	/*if (src == nullptr)
	{
		cout << "Error!" << endl;
	}
	if (dest == nullptr)
	{
		cout << "Error!" << endl;
	}*/
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

//1
char* isolateSmallLetters(const char* str) {

	if (str == nullptr)
	{
		cout << "Error!" << endl;
		return nullptr;
	}

	char buff[STR_MAX_LEN];
	size_t ind = 0;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			buff[ind] = *str; 
			ind++;
		}
		str++;
	}

	buff[ind] = '\0';
	
	return buff;
	
}

//2
size_t strLen(const char* str)
{
	size_t len = 0;
	while (str[len++])
	return len - 1;
}

//char* subStr(const char* str, size_t beg, size_t end)
int main()
{
	char buff[STR_MAX_LEN];

	strCpy(isolateSmallLetters("aFGcdEE6"), buff);

	cout << buff << endl;
	
}
