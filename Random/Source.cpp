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
	int arr[n] = {};//�������� ������ �������������� ������ 0

	//���������� ������� ���������� �������:
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;//������� �� ������� ������ ������ ������ ��������
	}

	//�����  ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//���������� �������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//arr[i] - ��������� �������
			//arr[j] - ������������ �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//����� ��������������� �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//������������ ������� ���������� ������� �� 0 �� 10(����� �� �����������):
	for (int i = 0; i < n ; i++)
	{
		/*arr[i] = rand()%10;*/
	}

	//����� ������������ �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}