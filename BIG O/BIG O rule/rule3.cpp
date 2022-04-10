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


void rule3example(int arr[],int anotherarr[],int size,int size2){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    } //This is O(n);
    cout<<endl;
    for(int j = 0; j< size2; j++){
        cout<<anotherarr[j]<<" ";
    } //This is O(m), because this is another input or parameter, or we can said is different than n, so we can said this is m
}

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9};
    int anotherarr[] = {123,1241,25,236,236326,34643,63754,7547,};
    int size = sizeof(array) / sizeof(array[0]);
    int size2 = sizeof(anotherarr) / sizeof(anotherarr[0]);
    
    rule3example(array,anotherarr,size,size2); 
    /*
    This one is not O(2n), because we got two different input or parameter, which mean that cant be 2n, 
    as I said that we can said that second for loop is O(m), is not depend on n, is depend on it own parameter or input
    so we can said this function is O(n+m)
    */
    
    return 0;
}