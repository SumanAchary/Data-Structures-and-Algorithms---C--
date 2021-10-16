#include <iostream>
using namespace std;

bool isPresent(int arr[], int n, int ele)
{

    if (arr[0] == ele && n >= 0)
    {
        cout << "Element " << ele << " found in the aray";
        return true;
    }
    else
    {
        return false;
    }

    return isPresent(arr + 1, n - 1, ele);
}

int main()
{
    int n;
    cout << "size of array\n";
    cin >> n;
    int arr[n];
    cout << " Enter array Elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " Enter Element to check, if present\n";
    int ele;
    cin >> ele;

    cout << isPresent(arr, n, ele);
}