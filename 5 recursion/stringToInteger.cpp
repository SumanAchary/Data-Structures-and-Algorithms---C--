#include <bits/stdc++.h>
using namespace std;

int length(char inp[])
{
    if (inp[0] == '\0')
    {
        return 0;
    }
    return length(inp + 1) + 1;
}

int convertStringToInt(char str[], int len)
{
    if (len == 0)
    {
        return 0;
    }
    int smallAns = convertStringToInt(str, len - 1);
    int lastDigit = str[len - 1] - '0';
    int ans = smallAns * 10 + lastDigit;
    return ans;
}

int main()
{
    char str[] = "12345";
    int len = length(str);
    int a = convertStringToInt(str, len);
    cout << a << endl;
    return 0;
}