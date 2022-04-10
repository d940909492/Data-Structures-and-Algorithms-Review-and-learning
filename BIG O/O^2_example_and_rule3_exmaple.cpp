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


void AnotherRule3example(int arr[],int anotherarr[],int size,int size2){
    
    int i,j;
    for(i = 0; i<size; i++){ //This is O(n)
        for(j = 0; j<size2;j++){ //This is O(m)
            cout<<arr[i]<<" "<<anotherarr[j]<<endl;
        }
    }
}

void O_n_square_example(int arr[], int size){
    int i,j;
    for(i = 0; i<size; i++){ //This is O(n)
        for(j = 0; j<size;j++){ //This is also O(n)
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
}

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9};
    int anotherarr[] = {123,1241,25,236,236326,34643,63754,7547,};
    int size = sizeof(array) / sizeof(array[0]);
    int size2 = sizeof(anotherarr) / sizeof(anotherarr[0]);
    
    AnotherRule3example(array,anotherarr,size,size2); 
    /*
    This one is O(n * m), because is nested loop, they run together
    */
    
    O_n_square_example(array,size);
    /*
    seems They got same parameters or same input, which same n, so we can said this one is O(n*n), or we can said this is O(n^2)
    */
    
    return 0;
}