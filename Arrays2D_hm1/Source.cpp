#include<iostream>
#include<ctime>
#include<Windows.h>

using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	int summa = 0;
	int buffer = 0;
	const int ROWS = 8;
	const int COLS = 5;
	int arr[ROWS][COLS] = {};
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			summa += arr[i][j];
			min > arr[i][j] ? min = arr[i][j] : min;
			max < arr[i][j] ? max = arr[i][j] : max;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << "\n����� ��������� �������: " << summa << endl;
	cout << "������� �������������� ��������� �������: " << (double)summa/(ROWS*COLS) << endl;
	cout << "������������ �������� �������: " << max << endl;
	cout << "����������� �������� �������: " << min << endl;
}