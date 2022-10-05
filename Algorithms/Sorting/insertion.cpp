#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for (int i = 1; i < n; i++)
    { 
        int temp = arr[i]; 
        int j = i - 1; 

        while (j >= 0 && arr[j] > temp)
        { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
        arr[j + 1] = temp; 
    } 
}

int main() {
  int arr[] = {1,6,4,8,10,9,1,7,3,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr, n);
  for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
}
