#include <iostream>
using namespace std;

void print(long long int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);
    cout << n << endl;
}

int main() {
    print(50000);
    return 0;
}