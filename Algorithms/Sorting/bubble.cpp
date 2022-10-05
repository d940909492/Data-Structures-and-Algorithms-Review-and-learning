#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - 1 - i; j++) {

            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
  int arr[] = {1,6,4,8,10,9,1,7,3,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr, n);
  for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
}
