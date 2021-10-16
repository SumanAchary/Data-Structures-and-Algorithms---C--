#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> *vp = new vector<int>();
    v.push_back(10);
    v[1] = 144;
    v.push_back(14);
    cout << v[0]<<endl;
    cout << v[1];
}