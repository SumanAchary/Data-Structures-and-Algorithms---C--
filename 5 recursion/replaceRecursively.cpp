#include <iostream>
using namespace std;

void replaceInt(int a[], int ele)
{
    if (a[0] == ele)
    {
        a[0] = 90; // replace ele with 90;
    }
    if (a[0] == '\0')
    {
        return;
    }
    replaceInt(a + 1, ele);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    replaceInt(arr, 5);

    for (auto i : arr)
    {
        cout << i << " ";
    }
}