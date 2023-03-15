#include<iostream>
using namespace std;



const int n = 10;
int arr[n];

int k;
int* even = new int[k];

int l;
int* odd = new int[l];

void FilRand(int arr[], const int n);

void Print(int arr[], int n);
void Print(int* even[], int k);
void Print(int* odd[], int l);
void Sort_on_Chetnost(int arr[], const int n);



void main()
{
	setlocale(LC_ALL, "");
		
	FilRand(arr, n);

	Print(arr, n);

	Sort_on_Chetnost(arr, n);
	Print(even, k);
	Print(odd, l);
		
}


void FilRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		arr[i] = rand() % 20;  
	}
	
}
template <typename T>
T Print(T arr[], T n)
{


	for (int i = 0; i < n; i++)
	{
						cout << arr[i] << "\t";
			}
	cout << endl;

}
void Sort_on_Chetnost(int arr[], const int n)
for (int i = 0; i < n; i++)
{
	if (arr[i] % 2 == 0)
	{
		even[i] = &arr[i]
	}
	else odd[i] = &arr[i]
}

void Print(int* even[], int k)
{
	for (int i = 0; i < k; i++)
	{		
		cout << *even[i] << "\t";
			}
	cout << endl;

}
void Print(int* odd[], int l)
{
	for (int i = 0; i < k; i++)
	{		
		cout << *odd[i] << "\t";
			}
	cout << endl;

}




/*
int* push_back(int arr[], int& n, int value)
{
	// 1. Создаем новый массив нужного размера:

	int* buffer = new int[n + 1];

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

	arr[n] = value;

	// 6. После добавления элемента в массив, количество элементов увеличивается на 1;

	n++;

	return arr;

}*/
