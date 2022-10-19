/*
Breadth First Search For tree

*/

#include <iostream>
#include <queue>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
};

Node *createNode(int data) {
  Node *temp = new Node();
  temp->data = data;
  temp->left = nullptr;
  temp->right = nullptr;
  return temp;
}

void BFS(Node* root){
  queue<Node*> q;
   q.push(root);
   while (q.empty() == false) {
      Node *current = q.front();
      cout << current->data <<endl;
      q.pop();
      if (current->left != NULL)
         q.push(current->left);
      if (current->right != NULL)
         q.push(current->right);
   }
}

int main() {
  Node *root;
  root = createNode(1);
  root->left = createNode(2);
  root->right = createNode(3);
  root->left->left = createNode(4);
  root->left->right = createNode(5);
  root->right->left = createNode(6);
  root->right->right = createNode(7);

  BFS(root);
  cin.get();
}
