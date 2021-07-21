#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define Escape 27
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Нажмите на любую клавишу\n";
	system("CLS");
	char key;
	key = _getch();
	do
	{
		int a; cout << "Введите номер программы:\n 1-сдвиг влево\n 2-сдвиг вправо \n"; cin >> a;
		const  int n = 10;
		int numbers_of_shifts;
		int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
		switch (a)
		{
		case 1:
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << tab;
			}
			cout << endl;
			cout << "Введите количество сдвигов: "; cin >> numbers_of_shifts;
			for (int i = 0; i < numbers_of_shifts; i++)
			{
				int buffer = arr[0];
				for (int i = 0; i < n; i++)
				{
					arr[i] = arr[i + 1];
				}
				arr[n - 1] = buffer;
			}
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << tab;
			}
			cout << endl; break;

		case 2:
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << tab;
			}
			cout << endl;
			cout << "Введите количество сдвигов: "; cin >> numbers_of_shifts;
			for (int i = 0; i < numbers_of_shifts; i++)
			{
				int buffer = arr[n - 1];
				for (int i = n - 2; i >= 0; --i)
				{
					arr[i + 1] = arr[i];
				}
				arr[0] = buffer;
			}
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << tab;
			} break;
		default: cout << "Oшибка\n";
		}
	} while (key != 27);
	
}