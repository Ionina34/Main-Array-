#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS] =
	{
		{3,   5,  8},
		{13,  21, 34},
		{55,  89, 144},
	};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS;j++)
		{
			arr [i][j] = rand() % 100;
		}
	}
	cout << "Исходный массив: " << endl;
	//Вывод исходного массива на экран
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
		//Сортировка двумерного массива:
		int iterations = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				for (int k = 0; k < ROWS; k++)
				{
					for (int l = k==i?j+1:0; l < COLS; l++)
					{
						if (arr[k][l] < arr[i][j])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[k][l];
							arr[k][l] = buffer;
						}
						iterations++;
					}
				}
			}
		}

		cout << "\nСортированный массив: " << endl;
		cout << "Масив отсортирован за " << iterations << " итераций " << endl;;
	
	//Вывод сортированного массива на экран:
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;
		}
}