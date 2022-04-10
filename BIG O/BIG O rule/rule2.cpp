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


void rule2example(int arr[],int size){
    cout<<"HI";  //O(1)
    
    int halfsize = size / 2;
    int x{0};
    while(x < halfsize){ 
        cout<<arr[x]<<" ";
        x++;
    } // for this one we can said O(n/2), because it only depend half of the array
    
    
    for (int i = 0; i < 100; i++) {
        cout<<"HI again"<<endl;
    } //This one is O(100), because is not depend on the array or we can said not depend on n, it just run 100 times not n times
}

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array) / sizeof(array[0]);
    
    rule2example(array,size); //so for this function it run O(n/2 + 101)
    
    /*According to rule 2: remove Constants, we can said that this function is O(n), because if n is getting larger and larger,
    101 is not necessarily, also for n/2 , as the number or n is become bigger and bigger, n/2 is also not necessarily,
    no matter is n/2 or 2n , we just drop all constants, so this function is O(n)
    */
    
    return 0;
}