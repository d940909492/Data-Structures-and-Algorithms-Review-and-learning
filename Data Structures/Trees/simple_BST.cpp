/*
binary search tree:
Binary Search Trees are a non-linear data structure, it have 2 propertiesthe:
left subtree of a node contains only nodes with keys lesser than the node’s key, while the right subtree of a node contains only nodes with keys greater than the node’s key.
In most cases, the time complexity of operations on a BST, which include, lookups, insertions and deletions, take O(log N) time
/

#include<iostream>
 
using namespace std;
 
struct Node{
  int data;
  Node *left;
  Node *right;
};
 
class BST{
  Node* insert(Node* root, int data){
    if (root == NULL) {
        return new Node(data);
    }
    if (data > root->data) {
        root->right = insert(root->right, data);
    }
    else if (data < root->data){
        root->left = insert(root->left, data);
    }
    return root;
}


};
