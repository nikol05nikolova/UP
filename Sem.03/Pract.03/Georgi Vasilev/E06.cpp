#include <iostream>
using namespace std;
int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n >= 0 && n <= 100)
		{
			break;
		}
	}

	int c;
	int cnt = 0;
	while (true)
	{
		cin >> c;
		cnt++;
		if (c > n)
		{
			cout << "���������� ����� � ��-������ �� ��������";
		}
		else if (c < n)
		{
			cout << "���������� ����� � ��-����� �� ��������";
		}
		else {
			cout << "�����!\n";
			cout << "���� ����� ��������� " << cnt;
			break;
		}
	}
}
