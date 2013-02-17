#include "lit.hh"

void BasicLiteral::tokenize_string(string input){
  stringstream ip_stream(input);
  string data;
  while(ip_stream.good()){
    getline(ip_stream,data,delimiter);
    tokens.push_back(data);
  }
}

void BasicLiteral::show_all_tokens(){
  for(vector<string>::iterator start = tokens.begin(); start != tokens.end();++start){
    cout<<*start<<endl;
  }
}


void BasicLiteral::create_literal_from_file(){
  string file_name = "lit.txt";
  ifstream  file_stream(file_name.c_str());
  string data;
  if(file_stream.is_open()){
    while(file_stream.good()){
      getline(file_stream,data);
      tokenize_string(data);
    }
  }else{
    cout<<"File Not found "<<endl;
  }
  file_stream.close();
}
