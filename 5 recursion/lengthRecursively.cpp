#include <bits/stdc++.h>
using namespace std;

int lengthArray(int n[])
{
    if (n[0] == '\0')
    {
        return 0;
    }
    int smallLength = lengthArray(n + 1);
    return smallLength + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << lengthArray(arr);
}