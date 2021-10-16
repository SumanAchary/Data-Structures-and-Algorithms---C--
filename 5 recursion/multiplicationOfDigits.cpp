// cannot use multiply operator '*'.
// using only recursion

#include <iostream>
using namespace std;

int multiply(int n, int m)
{
    if (m == 0)
        return 0;
    return multiply(n, m - 1) + n;
}

int main()
{
    cout << "multiplication: " << multiply(3, 12);
}