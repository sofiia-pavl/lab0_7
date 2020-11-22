#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Create(int** a, const int n, const int Low, const int High);
void Print(int** a, const int n);
int MaxRows(int** a, const int n, int& maxElement, int max);
void Sort(int** a, const int n, int& maxElement, int& max);

int main()
{
	srand((unsigned)time(NULL));
	int Low = 7;
	int High = 65;
	int n;

	cout << "n = "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];

	Create(a, n, Low, High);
	Print(a, n);
	int maxElement;
	int max{};
	MaxRows(a, n, maxElement, max);
	Sort(a, n, maxElement, max);
	Print(a, n);
	delete[] a;
	return 0;
}
void Create(int** a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int MaxRows(int** a, const int n, int& maxElement, int max){
	maxElement = a[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > maxElement)
			{
				return maxElement = a[i][j];
				return max = j;
			}
			
		}	     	}	}void Sort(int** a, const int n, int& maxElement, int& max)
{

	for (int i = 0; i < n; i++)     // for (i = 0, j = n-1; i < n; i++, j--)
	{
		for (int j = 0; j < n; j++)
		{
			int rab = a[i][j];//int j = n-1-i; 
		 if(i=j)// { rab = C[i][i];
			rab = a[i][i];                //C[i][i]=C[i][j];
			a[i][i] = maxElement;             //C[i][j] = rab; }
			a[i][max] = rab;
		}
	}
}