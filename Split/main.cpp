#include<iostream>
using namespace std;

void FilRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: ";
	cin >> n;

	int* arr = new int[n];
	FilRand(arr, n);
	Print(arr, n);
}


void FilRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		*(arr + i) = rand() % 100;  //Обращение к элементам массива через арифметику указателей и оператор разыменования
	}

}

void Print(int arr[], const int n)
{


	for (int i = 0; i < n; i++)
	{

		//Обращение к элементам массива через  оператор индексирования:
		cout << arr[i] << "\t";

	}
	cout << endl;

}
