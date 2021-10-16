#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            cout << key << " found\n";
            return mid;
        }

        else if (arr[mid] > key)
        {
            right = mid - 1;
        }

        else
        {
            left = mid + 1;
        }
    }
    cout << key << " not found\n";
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 44, 53, 111}; // this array should be sorted

    cout << binarySearch(arr, 5, 10);
    return 0;
}