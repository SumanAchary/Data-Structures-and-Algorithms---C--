#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * power(x, n - 1);
    // return 5 * (5 * 1)
}

int main()
{
    cout << power(5, 2);
    return 0;
}