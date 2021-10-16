#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    int i,j,key;
    for(int i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for(int i = 0; i < 10; i++)
        cout<< arr[i] <<" "; 
}

int main(){
    int arr[10] = {2,3,4,6,78,21,23,4,6};
    insertionSort(arr,10);
}

