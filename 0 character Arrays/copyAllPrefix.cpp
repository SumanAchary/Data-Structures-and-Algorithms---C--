#include<iostream>
#include<cstring>
using namespace std;

/*
print all prefix. 
string = "ABCD"
A
AB
ABC
ABCD

Tip: use simply two for loops and then, start printing the First char, followed by its next index, in the next line.
*/


void printAllPrefix(char str[]){
	for( int end = 0; end < strlen(str); end ++){
		for (int s = 0; s <= end; s++)
			cout << str[s];
		cout <<endl;
	}
}

int main()
{
 char str[] = "abcd";
 printAllPrefix(str);


}
