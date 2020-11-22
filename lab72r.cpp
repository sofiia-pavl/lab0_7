#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void CreateRow(int** a, const int rowNo, const int n, const int Low,
	const int High, int colNo)
{
	a[rowNo][colNo] = Low + rand() % (High - Low + 1);
	if (colNo < n - 1)
		CreateRow(a, rowNo, n, Low, High, colNo + 1);
}
void CreateRows(int** a, const int n, const int Low, const int High, int rowNo)
{
	CreateRow(a, rowNo, n, Low, High, 0);
	if (rowNo < n - 1)
		CreateRows(a, n, Low, High, rowNo + 1);
}
void PrintRow(int** a, const int rowNo, const int n, int colNo)
{
	cout << setw(4) << a[rowNo][colNo];
	if (colNo < n - 1)
		PrintRow(a, rowNo, n, colNo + 1);
	else
		cout << endl;
}void PrintRows(int** a, const int n, int rowNo)
{
	PrintRow(a, rowNo, n, 0);
	if (rowNo < n - 1)
		PrintRows(a, n, rowNo + 1);
	else
		cout << endl;
}int MaxRows(int** a, const int n, const int rowNo, int colNo, int& maxElement, int max){	maxElement = a[0][0];	if (rowNo < n)		MaxRow(a, n, 0, colNo, maxElement, max);	if (rowNo < n - 1)		MaxRows(a, n, rowNo + 1, colNo, maxElement, max);	else		return maxElement, max;}int MaxRow(int** a, const int n, const int rowNo, int colNo, int& maxElement, int max){	if(colNo<n)		if (a[rowNo][colNo] > maxElement)
		{
			return maxElement = a[rowNo][colNo];
			return max = colNo;
		}	if (colNo < n - 1)		MaxRow(a, n, rowNo, colNo + 1, maxElement, max);}void Sort(int** a, const int n, const int rowNo, int colNo, int& maxElement, int& max){	if (rowNo < n)		Sorts(a, n, rowNo, colNo, maxElement, max);	if (rowNo < n - 1)		Sort(a, n, rowNo + 1, colNo, maxElement, max);}void Sorts(int** a, const int n, int rowNo, int colNo, int& maxElement, int& max){	if (colNo < n) 
	if (rowNo = colNo)
		int rab = a[rowNo][colNo];                
	a[rowNo][colNo] = maxElement;             
	a[rowNo][max] = rab;	if (colNo < n - 1)		Sorts(a, n, rowNo, colNo + 1, maxElement, max);}int main()
{
	srand((unsigned)time(NULL));
	int Low = 7;
	int High = 65;
	int n;

	cout << "n = "; cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	CreateRows(a, n, Low, High, 0);
	PrintRows(a, n, 0);	int maxElement;
	int max{};	MaxRows(a, n,0,0, maxElement, max);	Sort(a, n,0,0, maxElement, max);	PrintRows(a, n, 0);	delete[] a;
	return 0;
}