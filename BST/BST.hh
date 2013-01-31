#ifndef BST_HH_
#define BST_HH_


#include<iostream>
#include<cstdlib>
using namespace std;


class Node{
public :
  Node();
  Node(int dat);

public:
  int data;
  Node *left;
  Node *right;
};


Node::Node(){
  data = -999;
  left = NULL;
  right = NULL;
}

Node::Node(int dat){
  data = dat;
  left = NULL;
  right = NULL;
}


class BST{
public :
  BST();
  void insert(int data);
  void inorder_traversal(Node *node);

public:
  Node *head;
};

BST::BST(){
  head = NULL;
}

void BST::insert(int data){
  Node *node = new Node(int data);
  Node *cur = head;
  Node *prev = cur;
  if(head == NULL){
    head = node;
    return;
  }
  while(cur != NULL){
    prev = cur;
    if(node.data >= cur.key){
      cur = cur.right;
    }else{
      cur = cur.left;
    }
  }
  if(data < prev.data){
    prev.left = node;
  }else{
    prev.right = node;
  }
}

void BST::inorder_traversal(Node *node){
  if(node != NULL){
    inorder_traversal(node.left);
    cout<<node.data<<endl;
    inorder_traversal(node.right);
  }
}

 
#endif
