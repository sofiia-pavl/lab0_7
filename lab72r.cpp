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
}
{
	PrintRow(a, rowNo, n, 0);
	if (rowNo < n - 1)
		PrintRows(a, n, rowNo + 1);
	else
		cout << endl;
}
		{
			return maxElement = a[rowNo][colNo];
			return max = colNo;
		}
	if (rowNo = colNo)
		int rab = a[rowNo][colNo];                
	a[rowNo][colNo] = maxElement;             
	a[rowNo][max] = rab;
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
	PrintRows(a, n, 0);
	int max{};
	return 0;
}