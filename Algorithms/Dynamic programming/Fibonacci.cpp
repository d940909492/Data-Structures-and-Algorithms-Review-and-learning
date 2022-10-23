#include <iostream>
#include <deque>

using namespace std;

long int glo_calculating_step = 0;

//bad way to do fibonacci, b/c is very slow
int fib1(int n){
  glo_calculating_step++;
if(n < 2){
  return n;
}
  return fib(n-1)+fib(n-2);
}


//faster way, using dynamic programming, but space complexity is larger
int fib2(int n){
    int ans[n + 2];

    ans[0] = 0;
    ans[1] = 1;
 
    for(int i = 2; i <= n; i++)
    {
         
       ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[n];
}

//another way to solve it, using deque
int fib3(int n){
deque<int> ans;
ans.push_back(0);
ans.push_back(1);
for(int i =2 ; i <= n ; i++){
  ans.push_back(ans[i-1] + ans[i - 2]);
}
return ans.back();
}

int main(){
  int n;
  cout<<"Enter a positive int: ";
  cin>>n;
//cout<<"fib number: "<<fib1(n)<<endl;
//cout<<"fib number: "<<fib2(n)<<endl;
//cout<<"fib number: "<<fib3(n)<<endl;
cout<<"Total calculating steps: "<<glo_calculating_step;
  return 0;
}
