#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Create(int** a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    cout << endl;
}
int Sum(int** a, int k, int l, int s, const int size, int s1)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] >= 0)
            {
                if (a[i][j] % 2 == 0)
                    l += a[i][j];
                k++;
            }
        }
        if (k == size) {
            l = l;
        }
        else {
            l = 0;
        }
        s = s + l;
        k = 0;
    }
    return s1 = a[0][size - 1];
};
int Min(int** a, const int size, int t1, int t2, int s1)
{
    for (int i = 1; i < size; i++)
    {
        t1 = t2 = 0;
        for (int j = 0; j < size - i; j++)
        {
            t1 += a[i + j][j];
            t2 += a[j][i + j];
        }
        if (t1 < s1) s1 = t1;
        if (t2 < s1) s1 = t2;
    }
    return s1;
};
int main(int argc, char* argv[])
{
    int s = 0, k = 0, l = 0, s1 = 0, t2 = 0, t1 = 0;
    srand(time(NULL));
    int Low = -5;
    int High = 15;
    int size;
    cout << "size = "; cin >> size;
    int** a = new int* [size];
    for (int i = 0; i < size; i++)
        a[i] = new int[size];
    Create(a, size, Low, High);
    Print(a, size);

    cout << "sum = " << Sum(a, k, l, s, size, s1) << endl;
    cout << "min = " << Min(a, size, t1, t2, s1) << endl;

    delete[] a;
    return 0;
}