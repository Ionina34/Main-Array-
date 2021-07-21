#include<iostream>
#include<ctime>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int n = 10;
	int arr[n] = {};
	bool proverka;
	for (int i = 0; i < n;)
	{
		proverka = false;
		int RandNumbers = rand() % 20;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == RandNumbers)proverka = true;;
		}
		if (proverka != true)
		{
			arr[i] = RandNumbers;
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<< endl;
	}
}