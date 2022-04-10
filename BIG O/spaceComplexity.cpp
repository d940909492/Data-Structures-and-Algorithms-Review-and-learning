/******************************************************************************

-What causes Space complexity?-
Variables
Data Structures
Function Call
Allocations

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

//REMEMBER: Time Complexity and Space Complexity are different

void spaceComplexity(int x){
    cout<<"Hello!";
    for(int i=0; i <x; i++){
        cout<<"hello";
    }
} //This is O(1) for Space Complexity, b/c this function did not allocate and set up any space but function itself,so is O(1)

int spaceComplexity2(int x){
    int array[x];
    for(int i = 0; i < x; i++) {
        array[i] = 0;
    }
    return *array;
} /* This one is O(n), b/c you allocate total x objects to array, the space is depend on parameter or input, which is x, and we not sure how big of x,
    So this function is O(n) */

int main()
{   
    int x;
    cin>>x;
    spaceComplexity(x);
    spaceComplexity2(x);
    
    return 0;
}