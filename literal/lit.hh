#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

class Literal{
public:
  virtual void create_literal_from_file()= 0 ;
};

class BasicLiteral : public Literal{
private:
  vector<string> tokens;
  const static char delimiter = '|';
private:
  void tokenize_string(string);

public:
  void show_all_tokens();
  void create_literal_from_file();
};
