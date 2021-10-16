#include <bits/stdc++.h>
using namespace std;

void printSubseqence(string input, string output, vector<string> &v)
{
    if (input.length() == 0)
    {
        v.push_back(output);
        // cout << output << endl;
        return;
    }
    printSubseqence(input.substr(1), output, v);
    printSubseqence(input.substr(1), output + input[0], v);
}

int main()
{
    char arr[] = {'a', 'b', 'c'};

    vector<string> v;
    printSubseqence(arr, "", v);
    for (auto i : v)
    {
        cout << i;
    }
    return 0;
}