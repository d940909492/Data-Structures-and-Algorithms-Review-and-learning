#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {
      int min = i;
      int temp = arr[i];
        for(int j = i + 1; j < n; j++) {

            if(arr[j] < arr[min]) {
                min = j;
            }
        }
      arr[i] = arr[min];
      arr[min] = temp;
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
