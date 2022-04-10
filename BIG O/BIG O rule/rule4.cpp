/******************************************************************************

__Bio O_RULE__

Rule 1: Always worst Case

Rule 2: Remove Constants

Rule 3: Different inputs should have different variables. O(a+b). A and B arrays nested would be
O(a*b)
+ for steps in order
* for nested steps

Rule 4: Drop Non-dominant terms

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

void rule4example(int arr[], int size){
    int x,i,j;
    
    for(x = 0; x<size;x++){ //This is O(n)
            cout<<arr[x]<<endl;
        }
cout<<"____________________________________________________________________________________________"<<endl;
    for(i = 0; i<size; i++){
        for(j = 0; j<size;j++){
            cout<<arr[i] + arr[j]<<endl;
        }
    } //This one is O(n^2)
}

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9};
    
    int size = sizeof(array) / sizeof(array[0]);
    
    rule4example(array,size);
    /*
    This one is O(n + n^2), but according to rule 4:drop non-dominant terms,
    which mean that drop term that not not necessarily, keep the term thats significant, so this function is O(n^2),
    in other one, keep the one is more significant and important, or we can said with bigger expoent,
    because as the n or the parameter getting bigger and bigger, n^2 is way significant than n, which mean that is more depend on n^2 or more close to n^2, so this function is O(n^2)
    */
    
    return 0;
}