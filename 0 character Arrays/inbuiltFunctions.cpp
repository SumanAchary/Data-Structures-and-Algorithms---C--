#include<iostream>
#include<cstring> // the header for string related inbuilt functions

using namespace std;

int main()
{
char str1[100];
char str2[100];

cin>>str1;
cin>>str2;

int len = strlen(str1); // strlen - calculates the length of the string.
cout << len;

if(strcmp(str1,str2) == 0){
	cout << "\nsame strings";}
else{cout << "\n not same strings";}
cout << len;	

char str3[10];
strcpy(str3,str1); // copies the items from str1 to str3.

return 0;
	
}
