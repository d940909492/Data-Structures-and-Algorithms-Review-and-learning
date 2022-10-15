
/*
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n).

  Time Complexity = O(Log n)
  space Complexity = O(1)
*/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target){
          cout<<"target found"<<endl;
            return mid;
          }
        if (arr[mid] > target){
            return binarySearch(arr, left, mid - 1, target);
          }else{
        return binarySearch(arr, mid + 1, right, target);
          }
    }
    cout<<"cant find target....."<<endl;
    return -1;
}

int main() {
    int arr[] = {2, 10, 3, 4, 5, 5, 9, 7, 6, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter a target: ";
    cin>>target;
    binarySearch(arr, 0, n-1, target);
    return 0;
}
