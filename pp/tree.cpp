#include <iostream>
#include <array>
using namespace std;


struct Node {
	enum COLOR {
	   BLACK,
	   RED
	} ;
	int key;
	int color;
	struct Node *left;
	struct Node *right;
	Node(int k = 0);
};

typedef struct Node Node;

Node::Node(int  k) {
	key = k;
	color = BLACK;
	left = NULL;
	right = NULL;
}



class Tree {
public:
	Node *head;
	Node *sentinel;	
public:
	Tree();
	void insertData(int key);
	void preorderTraversal(Node *node) ;
	void inorderTraversal(Node *node) ; 
	void postorderTraversal(Node *node);

};

Tree::Tree() {
	head = new Node;
	sentinel = new Node;
	head =  sentinel;
}

void Tree::insertData(int key ){
	Node *node = new Node(key);
	node->left = sentinel;
	node->right = sentinel;
	if(head == sentinel) {
		cout<<"Creating head with data "<<key<<endl;
		head = node;
		return;
	}
	Node *itr = head;
	Node *prev;
	while(itr != sentinel) {
		prev = itr;
		if(key <itr->key) {
			itr = itr->left;
		}else {
			itr = itr->right;
		}
	}
	if(key < prev->key) {
		prev->left = node;	
	}else {
		prev->right = node;
	}
}

void Tree::preorderTraversal(Node *node) {
	if(node != sentinel) {
		cout<<node->key<<"\t";
		preorderTraversal(node->left);
		preorderTraversal(node->right);
	}		
}

void Tree::inorderTraversal(Node *node) {
	if(node != sentinel) {
		inorderTraversal(node->left);
		cout<<node->key<<"\t";
		inorderTraversal(node->right);
	}
}

void Tree::postorderTraversal(Node *node) {
	if(node != sentinel) {
		postorderTraversal(node->left);
                postorderTraversal(node->right);
		cout<<node->key<<"\t";
	}
}


void populate(Tree *tree) {
	array<int,8> arr  = {2,8,7,1,3,5,6,4};
	for(int i  = 0 ; i < arr.size() ; ++i) {
		tree->insertData(arr[i]);
	}
}

int main() {
	Tree *tree = new Tree();
	populate(tree);
	//tree->preorderTraversal(tree->head);
	//tree->inorderTraversal(tree->head);
	tree->postorderTraversal(tree->head);
	cout<<endl;
	return 0;
}
