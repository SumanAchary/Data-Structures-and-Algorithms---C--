#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int ele, int idx = 0)
{

    if (arr[idx] == ele && idx <= n)
    {
        cout << idx << " ->PRESENT";
        return true;
    }
    if (idx > n)
    {
        return false;
    }
    return isPresent(arr, n, ele, idx + 1);
}

int main()
{
    int n = 5;

    int arr[] = {1, 5, 7, 6, 8};

    int ele = 7;
    cout << isPresent(arr, n, ele);
}