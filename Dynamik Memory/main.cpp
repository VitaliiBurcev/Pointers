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



	int value;
	cout << "введите значение добавляемого элемента: ";
	cin >> value;

	// 1. Создаем новый массив нужного размера:

	int* buffer = new int[n+1];

	// 2. Копируем все содержимое существующего массива в новый 

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	// 3. Удаляем исходный массив:
	delete[] arr;

	// 4. Подменяем адрес старогно массива адресом нового массива

	arr = buffer;
	// 5.Только после этого в массивае arr появляется элемент, в который можно сохранить добавляемое значение.
		
	arr[n]= value;

	// 6. После добавления элемента в массив, количество элементов увеличивается на 1;

	n++;
	Print(arr, n);
	delete[] arr;

	// Memory leaks

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

