
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
	cout << "¬ведите значение элементов(" << n << ")шт. :";
	//¬вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//¬вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//¬вывод массива на экран в обратном пор€дке
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
cout << endl;
	//—умма элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout << sum << endl;
	//—реднее арифмитеческое
	double SREDNEE_ARIFMETIHESKOE=0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	SREDNEE_ARIFMETIHESKOE = sum / n;
	cout << "—реднее арифметическое элементов массива: " << SREDNEE_ARIFMETIHESKOE << endl;
}
