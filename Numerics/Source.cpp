#include<iostream>
using namespace std;
using std::endl;
using std::cout;
using std::cin;
//#define DEC_2_BIN
#define DEC_2_HEX

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef DEC_2_BIN
	int decimal; //���������� ����� , �������� � ���������� 
	const int n = 32;
	bool bin[n] = {};//���� ������ ����� ������� ������� ��������� ����� (���� ��������� �����)
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;//������� ������� ������� ���� ��������� �����(������� �������)
	for (; decimal; decimal /= 2)bin[i++] = decimal % 2;
	//while (decimal > 0)
	//{
	//	bin[i++] = decimal % 2;
	//	decimal /= 2;
	//	//��������� � ���������� ������� i++
	//}

	//������� ������� �� ����� � �������� �������:
	for (--i/*������� ������ ��� ����� ������ ���������*/; i >= 0; i--)
	{
		cout << bin[i];
		if (i % 4 == 8)cout << "  ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
	cout << "�������� ����� ��������: " << sizeof(bin);
#endif // DEC_2_BIN

	int decimal;
	const int n = sizeof(int) * 2; // 1 ���� = 2 HEX �������
	char hex[n] = {};
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;
	for (; decimal; decimal /= 16)hex[i++] = decimal % 16;
	for ( i--; i >= 0; i--)
	{
		/*if (hex[i] < 10)cout << char(hex[i]+48);
		else cout <<char(hex[i] + 55);*/
		cout << char(hex[i] +( hex[i] < 10 ? 48 : 55));
	}
	cout << endl;
} 