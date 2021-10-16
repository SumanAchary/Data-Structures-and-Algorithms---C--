#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s = "suman";
    // cout << s <<endl<< s.length(); // finds string length, and prints the string itself first.
    
    string *sp  = new string;
    getline(cin,*sp);
     cout << sp <<endl;
     cout << *sp <<endl;


    // for multiple strings using vector.
    vector<string> v;
    v.push_back("SUMAN");
    for(int i = 0; i < v.size(); i++){
            cout << i<<endl;
            sort(v[i].begin(), v[i].end());
            cout << v[i];
    }
}