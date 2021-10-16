#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (a[0] > a[1])
        return false;

    bool isSmallerSorted = isSorted(a + 1, n - 1);

    return isSmallerSorted;
}

int main()
{
    int n = 0;
    cout << " please provide the size of the array\n";
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    // cout << "size of arr[]: " << sizeof(arr) << ", and size of arr[0]: " << sizeof(arr[0]) << endl;
    if (isSorted(arr, n))
    {
        cout << "\n Sorted";
    }
    else
    {
        cout << "\nNot Sorted";
    }
}
