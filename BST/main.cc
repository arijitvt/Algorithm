#include "BST.hh"

int main(){
  BST *bst = new BST();
  bst->insert(6);
  bst->insert(5);  
  bst->insert(7);
  bst->insert(3);
  bst->insert(4);
  bst->insert(8);

  bst->inorder_traversal(bst->head);
  return 0;
}
