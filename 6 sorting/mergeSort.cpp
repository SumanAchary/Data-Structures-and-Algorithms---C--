#include <bits/stdc++.h>
using namespace std;

void mergeArray(int x[], int y[], int a[], int startIdx, int endIdx)
{
    int mid = (startIdx + endIdx) / 2;
    int i = startIdx;
    int j = mid + 1;
    int k = startIdx;
    while (i <= mid && j <= endIdx)
    {
        if (x[i] < y[j])
        {
            a[k] = x[i];
            i++;
            k++;
        }
        else
        {
            a[k] = y[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        a[k] = x[i];
        k++;
        i++;
    }
    while (j <= endIdx)
    {
        a[k] = y[j];
        k++;
        j++;
    }
}

void mergeSort(int a[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    int x[100], y[100];
    for (int i = s; i <= mid; i++)
    {
        x[i] = a[i];
    }

    for (int i = mid + 1; i <= e; i++)
    {
        y[i] = a[i];
    }
    mergeSort(x, s, mid);
    mergeSort(y, mid + 1, e);
    mergeArray(x, y, a, s, e);
}

int main()
{
    int a[] = {1, 2, 3, 6, 5, 4, 7, 8, 9, 10};
    mergeSort(a, 0, 10);

    for (auto i : a)
    {
        cout << i << endl;
    }
    return 0;
}
