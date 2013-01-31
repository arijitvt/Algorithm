#include "BST.hh"

int main(){
  BST *bst = new BST();
  bst->inset(6);
  bst->inset(5);  
  bst->inset(7);
  bst->inset(3);
  bst->inset(4);
  bst->inset(8);

  bst->inorder_traversal(bst->head);
  return 0;
}
