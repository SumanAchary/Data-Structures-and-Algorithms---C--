#include<iostream>
using namespace std;

int length(char input[])
{
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++)
	count++;
	cout << count;
	return 0;
}

int main()
{
	char s[0];
	cin.getline(s,10);
	cout << s;
	length(s);
	
	return 3;
}
