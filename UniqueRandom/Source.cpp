#include<iostream>
using namespace std;

#define tab "\t"
//#define UNIQUE_1
//efine UNOQUE_2	

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n];
#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		bool unique;//���� ������������
		do
		{
			arr[i] = rand() % n;
			unique = true;//�����������, ��� ���������������� ���������� ��������� �����
			//�� ��� ����� ����� ���������:
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;//��������� ������� �������� �����, � ��� �����������
				}
			}
		} while (!unique);
	}
#endif // UNIQUE_1

	
#ifdef UNIQUE_2
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
#endif // UNIQUE_2

	cout << endl;for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

