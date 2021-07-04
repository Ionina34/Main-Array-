#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//Вывод исходного массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	int number_of_shifts;//Количество сдвигов
	cout << "Введите количесвто сдвигов: "; cin >> number_of_shifts;

	for (int i = 0; i < number_of_shifts; i++)
	{
		//Сдвиг массива влево на 1 элемент :
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			//arr[i] = arr[i + 1];//Ттекущий элемент помещаем значение следущего элемента
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}

	//Ввывод сдвинутого массива:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}