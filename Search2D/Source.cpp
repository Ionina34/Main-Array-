#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int ROWS = 3;
	const int COLS = 5;
	int arr[ROWS][COLS];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] <<"\t";
		}
		cout << endl;
	}

	//Search for repeats(����� ����������):
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//1)Check fpr earlier appearenes(���������, �� ����������� �� ��� �������� �����
			bool appeared_earlier = false;//������������, ��� ��������� �������� �� ����������� �����
			//�� ��� ����� ���������:
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])//���� ��������� ����������, ��
					{
						appeared_earlier = true;//������� ��� �������� ��� ����������� �����, 
												//� ������ �� � ��� ��� ��������, � ��� ������ ��� �� �����.
						break;
					}
				}
				if (appeared_earlier)break;
			}
			if (appeared_earlier)continue;//��������� ������� �������� ����� 'j', � ��������� � ��������� ��� ��������
			//2)
			//Searching for repeats (���� ����������):
			//int repeat_count = 0;//������� ����������
			int appearence_count = 1;
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)

				{
					//if (arr[i][j] == arr[k][l])repeat_count++;
					if (arr[i][j] == arr[k][l])appearence_count++;
				} 
			}
			//if (repeat_count)printf("Value % d, repates % d times\n", arr[i][j], repeat_count);
			if (appearence_count>1)printf("Value % d, repates % d times\n", arr[i][j], appearence_count);
		}
	}
}