#include <bits/stdc++.h>
using namespace std;

void removeConDuplicates(char arr[])
{
    if (arr[0] == '\0')
        return;

    if (arr[0] != arr[1])
    {
        return removeConDuplicates(arr + 1);
    }
    else
    {
        for (int idx = 0; arr[idx] != '\0'; idx++)
        {
            arr[idx] = arr[idx + 1];
        }
        removeConDuplicates(arr);
    }
}

int main()
{
    char ar[] = {
        'a',
        'a',
        'a',
        'b',
        'b',
        'b',
        'c',
        'a'};

    for (char i : ar)
    {
        cout << i;
    }
    removeConDuplicates(ar);
    cout << "\n\n";
    for (char i : ar)
    {
        cout << i;
    }
}
