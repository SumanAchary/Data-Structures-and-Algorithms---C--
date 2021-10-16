#include <bits/stdc++.h>
using namespace std;

void print(char a[])
{
    if (a[0] == '\0')
        return;
    cout << " " << a[0];
    print(a + 1);
}

void printLength(char a[], int n = 0)
{
    if (a[0] == '\0')
        cout << n;
    return;

    printLength(a + 1, n + 1);
}

void printReverse(char a[])
{
    if (a[0] == '\0')
        return;

    printReverse(a + 1);

    cout << " " << a[0];
}

int main()
{
    char suman[] = {'s',
                    'u',
                    'm',
                    'a',
                    'n'};
    printLength(suman);
    return 0;
}