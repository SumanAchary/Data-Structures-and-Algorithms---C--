#include <bits/stdc++.h>
using namespace std;

void strPermutation(char str[], int idx = 0)
{
    if (str[idx] == '\0')
    {
        cout << str << endl;
        return;
    }

    for (int j = idx; str[j] != '\0'; j++)
    {
        swap(str[idx], str[j]);
        strPermutation(str, idx + 1);
        swap(str[idx], str[j]);
    }
}

int main() {}