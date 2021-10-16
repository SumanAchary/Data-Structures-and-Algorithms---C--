#include <iostream>
using namespace std;

void count2(int a[], int n, int x, int i, int &ans)
{
    if (i == n)
    {
        return;
    }
    if (a[i] == x)
    {
        ans++;
    }
    count2(a, n, x, i + 1, ans);
}

int main()
{
    int a[] = {5, 5, 6, 5, 6, 7, 10};

    int ans = 0;
    count(a, 7, 10, 0, ans);
    cout << ans << endl;
    return 0;
}
