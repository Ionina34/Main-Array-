#include<iostream>
#include<Windows.h>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD buffer = { 80, 50 };
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN_MODE, &buffer);*/

	const int n = 10;
	int arr[n] = {};//Фигурные скобки инициализируют массив 0

	//Заполнение массива слечайными числами:
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;//Остаток от деления всегда строго меньше делителя
	}

	//Вывод  исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - Выбранный элемент
			//arr[j] - Перибираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//Вывод отсртированного массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Заполненение массива рандомными числами от 0 до 10(числа не повторяются):
	for (int i = 0; i < n ; i++)
	{
		/*arr[i] = rand()%10;*/
	}

	//Вывод заполненного массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}