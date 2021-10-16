#include <bits/stdc++.h>
using namespace std;

int toh(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return toh(n - 1) + 1 + toh(n - 1);
}

void printSteps(int n, char s, char d, char h)
{
    if (n == 0)
    {
        return;
    }
    
}

main()
{
    int n;
    cout << "" << endl;
    cin >> n;
    cout << toh(n) << endl;
    return 0;
}