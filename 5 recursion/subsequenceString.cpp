#include <bits/stdc++.h>
using namespace std;

void printSubseqence(string input, string output = "")
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    printSubseqence(input.substr(1), output);
    printSubseqence(input.substr(1), output + input[0]);
}

// using character arrays
void printSubseqence2(char input[], char output[], int idx = 0)
{
    if (input[0] == '\0')
    {
        output[idx] = '\0';
        cout << output << endl;
        return;
    }
    output[idx] = input[0];
    printSubseqence2(input + 1, output, idx + 1);
    printSubseqence2(input + 1, output, idx);
}

int main()
{
    char arr[] = {'a', 'b', 'c'};
    char output[10] = {};
    printSubseqence2(arr, output, 0);
    return 0;
}