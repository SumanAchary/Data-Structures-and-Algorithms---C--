#include <bits/stdc++.h>
using namespace std;

int countWays(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    if (n < 0)
    {
        return 0;
    }
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
}

int main()
{
    cout << countWays(4);
    return 0;
}