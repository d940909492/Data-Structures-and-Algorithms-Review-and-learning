#include <iostream>
using namespace std;

void mergeArray(int arr[], int begin, int mid, int end) {
    int size1 = mid - begin + 1;
    int size2 = end - mid;

    int leftArr[size1], rightArr[size2];

    for(int i = 0; i < size1; i++) {
        leftArr[i] = arr[begin + i];
    }
    for(int j = 0; j < size2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }
    int i{0}, j{0}, k{begin};

    while(i < size1 && j < size2) {
        if(leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
  
    while(i < size1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while(j < size2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
  
}


void mergeSort(int arr[], int begin, int end) { 

    if(begin < end) {
        int mid = (begin + (end - 1))/2;

        mergeSort(arr, begin, mid);
        mergeSort(arr, mid + 1, end);

        mergeArray(arr, begin, mid, end);
    }
}

int main() {
  int arr[] = {1,6,4,8,10,9,7,3,9,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  mergeSort(arr, 0 , n);
  for(int i = 0; i < n; i++) {
        cout<<arr[i]<<"  ";
    }
}
