#include <bits/stdc++.h>
using namespace std;

// formula
//  1.0/(2^0) + 1.0/(2^1) + ... + 1.0/(2^k)
// if k = 0, then return 1
double geometricSum(int k)
{
    if (k == 0)
        return 1;

    return geometricSum(k - 1) + 1.0 / pow(2, k);
}

int main()
{
    cout << geometricSum(3);
}