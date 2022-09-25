//simple Recursion to solve Factorial and Fibonacci
#include <iostream>

using namespace std;

int factorial(int n) {
    if(n <= 1){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int fibonacci(int n)
{
    if (n <= 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout<<factorial(5)<<endl;
    cout<<fibonacci(6)<<endl;

    return 0;
}