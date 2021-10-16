#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  int i,j;

  for(i = 1; i <= size - 1; i++){
    for(j = 0; j <= size-2; j++){
      if(arr[j] > arr[j + 1]){
        swap(arr[j],arr[j+1]);
      }
    }
  };
}


int main(){
  int size;

  cout << "Enter the Array size\n";
  cin >> size;

  int arr[size];
  cout << "Cool, Now enter the array elements\n";
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  cout << "Input has been taken, now we would sort the array => ";

  bubbleSort(arr, size);
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }


}
