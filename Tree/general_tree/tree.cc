#include<iostream>
#include<cstdlib>

//This comment is used to 
// Test the git connectivity for the 
// git core 

using namespace std;

class Node{
private:
  int data;
  Node *left;
  Node *right;

public:
  Node(int d);
  Node(int d, Node *l, Node *r);
  //Setters
  void setLeftChild(Node *l);
  void setRightChild(Node *r);
  void setData(int d);
  //Getters
  int getData();
  Node* getLeftChild();
  Node* getRightChild();

};

Node::Node(int d){
  data = d ;
  left = NULL;
  right = NULL;
}

Node::Node(int d, Node *l, Node *r){
  data = d;
  left = l;
  right = r;
}

void Node::setLeftChild(Node *l){
  left = l;
}

void Node::setRightChild(Node *r){
  right = r;
}

void Node::setData(int d){
  data = d;
}

Node* Node::getLeftChild(){
  return left;
}

Node* Node::getRightChild(){
  return right;
}

int Node::getData(){
  return data;
}

class Tree{
private:
  Node *head;

public:
  Tree();
  void addNewNode(int data);
  Node* getHead(){return head;}
};

Tree::Tree(){
  head = NULL;
}

void Tree::addNewNode(int data){
  Node *node = new Node(data);
  if(head == NULL){
    head = node;
    return;
  }

  Node *temp = head;
  Node *prev = temp;
  while(temp != NULL){
    prev = temp;
    if(data > temp->getData()) {
      temp = temp->getRightChild();
    }else{
      temp = temp->getLeftChild();
    }
  }
  if(data > prev->getData()){
    prev->setRightChild(node);
  }else{
    prev->setLeftChild(node);
  }
}

void preOrderTraversal(Node *node){
    if(node == NULL){
    return;
  }
   cout<<node->getData()<<endl;
  preOrderTraversal(node->getLeftChild());
  preOrderTraversal(node->getRightChild());
}

void inOrderTraversal(Node *node){
  if(node == NULL){
    return;
  }

  inOrderTraversal(node->getLeftChild());
  cout<<node->getData()<<endl;
  inOrderTraversal(node->getRightChild());
}

void postOrderTraversal(Node *node){
  if(node == NULL){
    return;
  }

  postOrderTraversal(node->getLeftChild());
  postOrderTraversal(node->getRightChild());
  cout<<node->getData()<<endl;
}

int main(){
  Tree t;
  for(int i = 0 ; i < 5; ++i){
    int dat = rand()%(1000);
    cout<<"From : "<<dat<<endl;
    t.addNewNode(dat);
  }
  cout<<"\nPre-Order Traversal: "<<endl;
  preOrderTraversal(t.getHead());
  cout<<"\nIn-Order Traversal: "<<endl;
  inOrderTraversal(t.getHead());
  cout<<"\nPost-Order Traversal : "<<endl;
  postOrderTraversal(t.getHead());
  return 0;
}
