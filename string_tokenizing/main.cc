#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void tokenize_string(string input){
  stringstream stream(input);
  string output;
  while(stream.good()){
    getline(stream,output,' ');
    cout<<output<<endl;
  }
}

int main(){
  string name= "My name is arijit chattopadhyay";
  tokenize_string(name);
  return 0;
}
