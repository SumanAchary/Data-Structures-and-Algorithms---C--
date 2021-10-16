#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int size, int ele)
{
    if (arr[size] == ele && size >= 0)
    {
        cout << endl
             << arr[size] << " -> PRESENT at index " << size << "\n\n";
    }

    if (size < 0)
    {
        return 0;
    }
    return isPresent(arr, size - 1, ele);
}

int main()
{
    int n;
    cout << "\nProvide size of Array\n";
    cin >> n;

    int arr[n];
    cout << "\nPlease provide Array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ele;
    cout << "\nPlease provide number to find from array\n";
    cin >> ele;
    cout << isPresent(arr, n - 1, ele);
}