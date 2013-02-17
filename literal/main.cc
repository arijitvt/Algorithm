#include "lit.hh"

int main(){
  BasicLiteral bLiteral;
  bLiteral.create_literal_from_file();
  bLiteral.show_all_tokens();
  return 0;
}
