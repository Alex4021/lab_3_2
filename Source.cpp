#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, n;
	n = 0;
	cout << "������ 1. ������� ����������." << endl;
	cout << "1)��������" << endl;
	cout << "2)�������" << endl;
	cout << "3)�����" << endl;
	cin >> a;
	switch (a)
	{
	case 2:
	case 3:
	{
		cout << "False" << endl;
		break;
	}
	case 1:
	{
		cout << "Truth" << endl;
		n = n + 1;
		break;
	}
	default:
	{
		cout << "Error" << endl;
	}
	}
	cout << "������ 2. ������� ��������." << endl;
	cout << "1)��������" << endl;
	cout << "2)�����" << endl;
	cout << "3)����������" << endl;
	cin >> a;
	switch (a)
	{
	case 2:
	{
		cout << "Truth" << endl;
		n = n + 1;
		break;
	}
	case 1:
	case 3:
	{
		cout << "False" << endl;
		break;
	}
	default:
	{
		cout << "Error" << endl;
	}
	}
	cout << "������ 3. ������� ���������." << endl;
	cout << "1)������" << endl;
	cout << "2)�����" << endl;
	cout << "3)����" << endl;
	cin >> a;
	switch (a)
	{
	case 3:
	{
		cout << "Truth" << endl;
		n = n + 1;
		break;
	}
	case 1:
	case 2:
	{
		cout << "False" << endl;
		break;
	}
	default:
	{
		cout << "Error" << endl;
	}
	}
	cout << "������ 4. ������� ��������." << endl;
	cout << "1)����" << endl;
	cout << "2)���������" << endl;
	cout << "3)������" << endl;
	cin >> a;
	switch (a)
	{
	case 2:
	case 3:
	{
		cout << "False" << endl;
		break;
	}
	case 1:
	{
		cout << "Truth" << endl;
		n = n + 1;
		break;
	}
	default:
	{
		cout << "Error" << endl;
	}
	}
	cout << "������ 5. ������� ����� �����." << endl;
	cout << "1)������" << endl;
	cout << "2)�������" << endl;
	cout << "3)����" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	case 2:
	{
		cout << "False" << endl;
		break;
	}
	case 3:
	{
		cout << "Truth" << endl;
		n = n + 1;
		break;
	}
	default:
	{
		cout << "Error" << endl;
	}
	}
	cout << "���������� ���������� �������: " << n << endl;
	system("pause");
	return 0;
}
