#include <iostream>
using namespace std;

int countZeros(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n % 10 == 0)
    {
        return countZeros(n / 10) + 1;
    }
    else{
        return countZeros(n / 10);
    }
}

int main()
{
    cout << "Num of zeros: " << countZeros(120000543);
}