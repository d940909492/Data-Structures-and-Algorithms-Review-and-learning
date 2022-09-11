/*
Linked lists are, as the name suggests, a list which is linked.
It consists of nodes which contain data and a pointer to the next node in the list.
The list is connected with the help of these pointers.
These nodes are scattered in memory, quite like the buckets in a hash table.
The node where the list starts is called the head of theblist and the node where it ends, or last node, is called the tail of the list.
The average time complexity of some operations invloving linked lists are as follows:
display : O(n)
insert : O(n)
remove : O(n)
append : O(1)
push : O(1)
*/

#include <iostream>
using namespace std;

/* 
we consider a node with two properties
1. Data(now integer)
2. link containing the address of the other node that it points.
*/

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int data): data{data}, next{NULL} , prev{NULL}{ 
//using initializer list to assign data and set next pointer to Null
    }
};

class DoubleLinkedList
{
    Node *head;
    Node *tail;

public:
  DoubleLinkedList(): head{NULL} , tail{NULL}
    {
    }

  Node* getter(){
    return head;
  }

  void append(int data)
    {
      Node *newNode = new Node(data);
      newNode->next = newNode->prev = NULL;
      if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
      tail->next = newNode;
      newNode->next = NULL;
      newNode->prev = tail;
      tail = newNode;
    }

    void push(int data)
    {
      Node *newNode = new Node(data);
      newNode->next = newNode->prev = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }

    void insert(int data, int pos)
    {
        if (pos < 0)
        {
            cout << "Cant insert" << endl;
            return;
        }
        else if (pos == 0)
        {
            push(data);
        }
        else if (pos >= data)
        {
            append(data);
        }
        else
        {
            Node *newNode = new Node(data);
            newNode->prev = NULL;

            Node *temp = tail;
            Node *tempH = head;
            while(tempH != NULL) {
                temp = temp->prev;
            }
            newNode->next = temp;
            newNode->prev = temp->prev;
            temp->prev->next = newNode;
        }
    }

    void remove(int pos)
    {
        if (pos < 1)
        {
            cout << "cant remove" << endl;
            return;
        }
        Node *temp = head;
        if (pos == 1)
        {
            head = head->next;
            delete temp;
            return;
        }

        for (int i = 1; temp != NULL && i < pos - 1; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
        {
          temp->next->prev = temp->prev;
          temp->prev->next = temp->next;
          delete temp;
          return;
        }
        temp->prev->next=NULL;
      
        tail = tail->prev;
        delete temp;

        return;
    }

    void display(Node** head)
    {
      Node *temp = *head;
      while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
      }
      cout<<"NULL"<<endl;
    }

};

int main()
{
    /*
use:
display : O(n)
insert : O(n)
remove : O(n)
append : O(1)
push : O(1)
play what ever you want
*/

    return 0;
}
