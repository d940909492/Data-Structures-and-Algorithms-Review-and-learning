#include<iostream>
 
using namespace std;
 
struct Node{
    int data;
    Node *next;
};
 
class Queue{
    public:
    Node *front;
    Node *back;
    Queue(){
      front= NULL;
      back = NULL;
      }
 
    void push(int n);
    void pop();
    void display();
};
 
void Queue::push(int n){
    Node *temp=new Node;
    if(temp==NULL){
        cout<<"overflow"<<endl;
        return;
    }
    temp->data=n;
    temp->next=NULL;
 
    if(front==NULL){
        front = temp;
        back=temp;
    }
    else{
        back->next=temp;
        back=temp;
    }
}

void Queue :: pop()
    {
    if (front==NULL){
        cout<<"no element"<<endl;
        return;
    }
     
    if(front==back){
      front=NULL;
      back = NULL;
      }else{
        front = front->next;
      }
  }

void Queue::display(){
    if(front==NULL){
        cout<<"Underflow."<<endl;
        return;
    }
    Node *temp=front;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
int main(){
  Queue queue;

  queue.push(0);
  queue.push(1);
  queue.push(2);
  queue.push(3);
  queue.push(4);
  
  queue.display();

     
    return 0;
}
