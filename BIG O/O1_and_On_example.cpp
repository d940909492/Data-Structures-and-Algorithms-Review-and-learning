/******************************************************************************

__Bio O__

1.O(1) Constant- no loops
2.O(log N) Logarithmic- usually searching algorithms have log n if they are sorted (Binary Search)
3.O(n) Linear- for loops, while loops through n items
4.O(n log(n)) Log Liniear- usually sorting operations
5.O(n^2) Quadratic- every element in a collection needs to be compared to ever other element. Two
nested loops
6.O(2^n) Exponential- recursive algorithms that solves a problem of size N
7.O(n!) Factorial- you are adding a loop for every element

* Iterating through half a collection is still O(n)
Two separate collections: O(a * b)

*******************************************************************************/
#include <iostream>

using namespace std;

void anotherFunction(int parameter){
    //just for example, not a actual function
}

void o1(int parameter){
    parameter = 10;  //this is  O(1) b/c it run one time
    cout<<parameter; //also O(1) b/c run time
}

void o_n(int parameter){
    int x = 10; //O(1)
    for(int i = 0; i<parameter; i++){ //O(n) ,b/c is a for loop
        anotherFunction(parameter); //O(n), b/c is depend on for loop
        i++; //O(n) , b/c is depend on for loop
        x++; //O(n) same reason
    }
}

int main()
{
    cout<<"Total is BIG O(3 + 4n) or you can simplify it as BIG O(n)";
    return 0;
}