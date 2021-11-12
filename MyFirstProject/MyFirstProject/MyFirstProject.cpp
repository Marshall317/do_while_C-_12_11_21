#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	//Калькулятор

	//Ввод данных
	double a, b;
	int key;

	do
	{
		cout << "1 - (+)\n";
		cout << "2 - (-)\n";
		cout << "3 - (*)\n";
		cout << "4 - (/)\n";
		cout << "0 - exit\n";
		cout << "Введите ваш выбор: ";
		cin >> key;

		switch (key)
		{
		case 1:
			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;


			cout << a << " + " << b << " = " << a + b << endl;

			break;
		case 2:
			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;

			cout << a << " - " << b << " = " << a - b << endl;

			break;
		case 3:
			
			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;

			cout << a << " * " << b << " = " << a * b << endl;

			break;
		case 4:
			cout << "Введите a: ";
			cin >> a;

			cout << "Введите b: ";
			cin >> b;

			if (b != 0)
				cout << a << " / " << b << " = " << a / b << endl;

			else
				cout << "Error 404\n";
			break;
		case 0:
			cout << "Goodbye\n";
		}

	} while (key != 0);
	return 0;
}
