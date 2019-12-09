#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, n;
	n = 0;
	cout << "Вопрос 1. Столица Португалии." << endl;
	cout << "1)Лиссабон" << endl;
	cout << "2)Мадейра" << endl;
	cout << "3)Порту" << endl;
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
	cout << "Вопрос 2. Столица Болгарии." << endl;
	cout << "1)Бухарест" << endl;
	cout << "2)София" << endl;
	cout << "3)Братислава" << endl;
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
	cout << "Вопрос 3. Столица Швейцарии." << endl;
	cout << "1)Женева" << endl;
	cout << "2)Цюрих" << endl;
	cout << "3)Борн" << endl;
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
	cout << "Вопрос 4. Столица Норвегии." << endl;
	cout << "1)Осло" << endl;
	cout << "2)Хельсинки" << endl;
	cout << "3)Мадрид" << endl;
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
	cout << "Вопрос 5. Столица Южной Кореи." << endl;
	cout << "1)Нассау" << endl;
	cout << "2)Пхеньян" << endl;
	cout << "3)Сеул" << endl;
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
	cout << "Количество правильных ответов: " << n << endl;
	system("pause");
	return 0;
}
