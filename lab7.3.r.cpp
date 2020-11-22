#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void CreateRow(int** a, const int rowNo, const int size,
    const int Low, const int High, int colNo)
{
    a[rowNo][colNo] = Low + rand() % (High - Low + 1);
    if (colNo < size - 1)
        CreateRow(a, rowNo, size, Low, High, colNo + 1);
}
void CreateRows(int** a, const int size,
    const int Low, const int High, int rowNo)
{
    CreateRow(a, rowNo, size, Low, High, 0);
    if (rowNo < size - 1)
        CreateRows(a, size, Low, High, rowNo + 1);
}

void PrintRow(int** a, const int rowNo, const int size, int colNo)
{
    cout << setw(4) << a[rowNo][colNo];
    if (colNo < size - 1)
        PrintRow(a, rowNo, size, colNo + 1);
    else
        cout << endl;
}
void PrintRows(int** a, const int size, int rowNo)
{
    PrintRow(a, rowNo, size, 0);
    if (rowNo < size - 1)
        PrintRows(a, size, rowNo + 1);
    else
        cout << endl;
}
int Sum(int** a, int k, int l, int s, const int size, int s1, int colNo,const int rowNo)
{
    if(rowNo<size)
    Sums(a, k, l, s, size, s1, colNo, 0);
     
        if (k == size) {
            l = l;
        }
        else {
            l = 0;
        }
        s = s + l;
        k = 0;
        if (rowNo < size - 1)
            Sum(a, k, l, s, size, s1, colNo, rowNo+1);
        else
            //cout << endl;
    return s1 = a[0][size - 1];
}
int Sums(int** a, int k, int l, int s, const int size, int s1, int colNo, const int rowNo)
{
    if(colNo<size)

    if (a[rowNo][colNo] >= 0)
    {
        if (a[rowNo][colNo] % 2 == 0)
            l += a[rowNo][colNo];
        k++;
    }
    if (colNo < size - 1)
        Sums(a, k, l, s, size, s1, colNo+1, rowNo);
    else
        return l, k;
      //  cout << endl;
}

int Min(int** a, const int rowNo, const int size, int colNo, int t1, int t2, int s1)
{
    if(rowNo < size)
    t1 = t2 = 0;
    Mins(a, 0, size, colNo, t1, t2, s1);

    if (t1 < s1) s1 = t1;
    if (t2 < s1) s1 = t2;
    if (rowNo < size - 1)
        Min(a, rowNo + 1, size, colNo, t1, t2, s1);
    else
    return s1;
}

int Mins(int** a, const int rowNo, const int size, int colNo, int t1, int t2, int s1)
{
    if(colNo < size - rowNo)
    t1 += a[rowNo + colNo][colNo];
    t2 += a[colNo][rowNo + colNo];
    if (colNo < size - 1)
        Mins(a, rowNo, size, colNo + 1, t1, t2, s1);
    else
        return t1, t2;
}

int main(int argc, char* argv[])
{
    int s = 0, k = 0, l = 0, s1 = 0, t2 = 0, t1 = 0;
    srand((unsigned)time(NULL));
    int Low = -5;
    int High = 15;
    int size;
    cout << "size = "; cin >> size;
    int** a = new int* [size];
    for (int i = 0; i < size; i++)
        a[i] = new int[size];
    CreateRows(a, size, Low, High, 0);
    PrintRows(a, size, 0);


    cout << "sum = " << Sum(a, k, l, s, size, s1,0,0) << endl;
    cout << "min = " << Min(a,0, size,0, t1, t2, s1) << endl;

    delete[] a;
    return 0;
}