#include<iostream>
using namespace std;

void printArray(int a[][5], int row, int col){
// rowise
for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }
}

int main(){

    int a[][5] = {
        {1,2},
        {4,3},
        {1,2},
        {1,2},
        {1,2},
    };
printArray(a,5,2);
}