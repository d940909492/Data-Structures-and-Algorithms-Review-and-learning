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
    Node(int data): data{data}, next{NULL} { 
//using initializer list to assign data and set next pointer to Null
    }
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
  LinkedList(): head{NULL} , tail{NULL}
    {
    }

  Node* getter(){
    return head;
  }

  void append(int data)
    {
      Node *newNode = new Node(data);
      if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
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
            Node *prev = head;

            for (int i = 0; i < pos - 1; i++)
            {
                prev = prev->next;
            }

            newNode->next = prev->next;

            prev->next = newNode;
        }
    }

    void removeNode(int pos)
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
            return;
        }
        Node *link = temp->next->next;

        delete (temp->next);

        temp->next = link;

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
  LinkedList ll;
  ll.append(2);
  ll.append(4);
  ll.append(6);
  ll.append(8);
  ll.append(10);
  Node *Head = ll.getter();
  ll.display(&Head);

    return 0;
}
