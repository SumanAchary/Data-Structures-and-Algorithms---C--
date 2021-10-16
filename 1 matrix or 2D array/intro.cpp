#include<iostream>
using namespace std;

int main(){
    int a[100][100];

    // lets declare the row and col variables.
    int row, col;

    // Taking input from the user.
    cout << "Please provide ROW and COL size."<<endl;
    cin >> row >> col;

    //Will loop through the 2D array, to take each input. 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "Please provide "<<i<<" th row and "<<j<<" th col value of the matrix"<<endl;
            cin >> a[i][j];
        }
    }

for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << a[i][j]<<" ";
        }
        cout <<endl;
    }

 return 0;
}