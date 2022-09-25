#include <iostream>
using namespace std;

class Stack
{
    int Top;
    int *stack;

public:
    Stack(): Top{-1}
    {
        stack = new int[100];
    }

    void push(int data)
    {
        if (Top >= 100 - 1)
        {
            cout << "stack is full" << endl;
            return;
        }
        Top ++;
        stack[Top] = data;
    }

    void pop()
    {
        if (Top == -1)
        {
            cout << "stack is empty" << endl;
            return;
        }
        Top--;
    }

    int top()
    {
        if(Top < 0) {
            cout << "stack is empty";
            return 0;
        }
        return stack[Top];
    }

  bool isEmpty(){
    if (Top != -1){
      return false;
    }
    return true;
  }

    void display()
    {
      for (int i = Top; i >= 0; i--){
            cout << stack[i] <<endl;
      }
    cout << endl;
    }
};

int main()
{
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.display();

  cout<<"top is: "<<s.top()<<endl;

  s.pop();
  s.display();

  cout<<"is empty or not(0 or 1): "<<s.isEmpty()<<endl;
  
}
