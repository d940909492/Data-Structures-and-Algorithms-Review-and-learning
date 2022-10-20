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

void DFS_inOrder(struct Node *node) {
  if (node == NULL) {
    return;
  }
  DFS_inOrder(node->left);
  cout << node->data << " ";
  DFS_inOrder(node->right);
}

void DFS_preOrder(struct Node *node) {
  if (node == NULL) {
    return;
  }
  cout << node->data << " ";
  DFS_preOrder(node->left);
  DFS_preOrder(node->right);
}

void DFS_postOrder(struct Node *node) {
  if (node == NULL) {
    return;
  }
  DFS_postOrder(node->left);
  DFS_postOrder(node->right);
  cout << node->data << " ";
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
  cout << "inOrder: " << endl;
  DFS_inOrder(root);
  cout << endl << "preOrder: " << endl;
  DFS_preOrder(root);
  cout << endl << "postOrder: " << endl;
  DFS_postOrder(root);
  return 0;
}
