/*
This searching algorithm is very simialr to looping
worst case:
  Time Complexity = O(n)
  space Complexity = O(1)
*/
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
          cout<<"target found"<<endl;
            return i;
        }
    }
    cout<<"Cant find the target...."<<endl;
    return -1;
}

int main() {
    int arr[] = {2, 10, 3, 4, 5, 5, 9, 7, 6, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter a target: ";
    cin>>target;
    linearSearch(arr, n, target);
    return 0;
}
