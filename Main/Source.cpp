
#include<iostream>
using namespace std;
#define tab "\t"
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	/*cout << UCHAR_MAX << endl;
	cout << sizeof(arr) << endl;*/
	cout << "������� �������� ���������(" << n << ")��. :";
	//������ ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//������ ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//������ ������� �� ����� � �������� �������
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
cout << endl;
	//����� ��������� �������
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout << sum << endl;
	//������� ��������������
	double SREDNEE_ARIFMETIHESKOE=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	SREDNEE_ARIFMETIHESKOE = sum / n;
	cout << "������� �������������� ��������� �������: " << SREDNEE_ARIFMETIHESKOE << endl;
}
