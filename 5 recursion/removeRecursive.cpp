#include <bits/stdc++.h>
using namespace std;

void removeA(char arr[])
{
    if (arr[0] == '\0')
    {
        return;
    }
    if (arr[0] != 'a')
    {
        return removeA(arr + 1);
    }
    else
    {
        for (int idx = 0; arr[idx] != '\0'; idx++)
        {
            arr[idx] = arr[idx + 1];
        }
        removeA(arr);
    }
}

int main()
{
    char ar[] = {'a', 'b', 's', 'c', 'a', 'd', 'd', 'a'};

    for (char i : ar)
    {
        cout << i;
    }
    removeA(ar);
    cout << "\n\n";
    for (char i : ar)
    {
        cout << i;
    }
}