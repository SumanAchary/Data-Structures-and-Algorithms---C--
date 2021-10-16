#include<iostream>
using namespace std;

int length(char input[])
{
	int count = 0;
	for(int i = 0; input[i] != '\0'; i++)
	count++;
	return count;
}

void reverseString(char input[]){
	int left = 0;
	int right = length(input) - 1;
	while(left < right){
		swap(input[left],input[right]);
		right --;
		left ++;
	}
}

int main(){
	char str[0];
	cin.getline(str,10);
	cout<< "before reverse: " << str<<endl;
	reverseString(str);
	cout<< "after reverse: " << str;
}
