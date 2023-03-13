#include<iostream>
using namespace std;

void FilRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: ";
	cin >> n;

	int* arr = new int[n];
	FilRand(arr, n);
	Print(arr, n);



	int value;
	cout << "������� �������� ������������ ��������: ";
	cin >> value;

	// 1. ������� ����� ������ ������� �������:

	int* buffer = new int[n+1];

	// 2. �������� ��� ���������� ������������� ������� � ����� 

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	// 3. ������� �������� ������:
	delete[] arr;

	// 4. ��������� ����� �������� ������� ������� ������ �������

	arr = buffer;
	// 5.������ ����� ����� � �������� arr ���������� �������, � ������� ����� ��������� ����������� ��������.
		
	arr[n]= value;

	// 6. ����� ���������� �������� � ������, ���������� ��������� ������������� �� 1;

	n++;
	Print(arr, n);
	delete[] arr;

	// Memory leaks

}


void FilRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{

		*(arr + i) = rand() % 100;  //��������� � ��������� ������� ����� ���������� ���������� � �������� �������������
	}

}

void Print(int arr[], const int n)
{
	

	for (int i = 0; i < n; i++)
	{

		//��������� � ��������� ������� �����  �������� ��������������:
		cout << arr[i] << "\t";

	}
	cout << endl;

}
