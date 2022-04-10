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

/*
void BADexample(int arr[],int size){
    srand(time(NULL));
    int random_number = rand() % 9;
    for(int i = 0; i < size; i++){
        cout<<"still Looking"<<endl;
        if(arr[i] == random_number){
            cout<<"Found it!"<<endl;
        }
    }
}
*/

/*code above is bad example b/c even you found the number but still running*/

void rule1example(int arr[],int size){
    srand(time(NULL));
    int random_number = rand() % 9;
    for(int i = 0; i < size; i++){
        cout<<"still Looking"<<endl;
        if(arr[i] == random_number){
            cout<<"Found it!"<<endl;
            break;
        }
    }
}

int main()
{   
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array) / sizeof(array[0]);
    
    rule1example(array,size); 
    /*
    This is O(n), it cant be o(1), not just because theres for loop in the function, according to BIG O rule 1:always think worst case
    BIG O rule 1 told you that always think about worst case, if the random number is last number then it might be run more than one time, so this should be O(n)
    */
    
    return 0;
}