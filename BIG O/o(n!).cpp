/******************************************************************************

O(1) Constant- no loops
O(log N) Logarithmic- usually searching algorithms have log n if they are sorted (Binary Search)
O(n) Linear- for loops, while loops through n items
O(n log(n)) Log Liniear- usually sorting operations
O(n^2) Quadratic- every element in a collection needs to be compared to ever other element. Two
nested loops
O(2^n) Exponential- recursive algorithms that solves a problem of size N
O(n!) Factorial- you are adding a loop for every element
Iterating through half a collection is still O(n)
Two separate collections: O(a * b)

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

void nFacRuntimeFunc(int n) {
  for(int i=0; i<n; i++) {
    cout<<"Hello"<<endl;
    nFacRuntimeFunc(n-1);
  }
}

int main()
{   
    int n;
    cin>>n;
    nFacRuntimeFunc(n);
    /*example of o(n!), it spent a lot time and useless code
     the time complexity of a function called in a loop affects the time complexity of the loop,
     If the loop is executed n times and the function in the loop executes (n-1)! steps, 
     then a total of n * (n-1)! = n! steps will be performed. 
     Which is exactly how you proof that this function's time complexity is in Θ(n!)
    
    */
    return 0;
}