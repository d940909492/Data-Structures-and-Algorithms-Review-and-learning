/*
Doubly linked lists are just normal, singly linked lists with one added feature,
a link to the previous node as well in addition to a link to the next node.
Although the worst case time complexities of all operations in a doubly linked list are same as that of a singly linked list,
Some operations are technically faster. For example, lookup or searching, is O(n/2) as search can begin from both ends
But O(n/2) = O(n), so it is still the same as that for a singly linked list.

Implementation of doubly linked list is almost exactly the same as that for singly linked list,
With just the added feature of the pointer to the previous node.
*/

#include <iostream>
using namespace std;

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
