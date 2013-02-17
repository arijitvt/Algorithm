#include "UF.hh"

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
#include<utility>
using namespace std;


void prepare_input(vector<vector<int> > &input){
  ifstream file("input.txt");
  string data;
  if(file.is_open()){
    while(file.good()){
      getline(file,data);
      if(data != ""){
	stringstream ss(data);
	vector<int> inner;
	int temp;
	ss>>temp;
	inner.push_back(temp);
	ss>>temp;
	inner.push_back(temp);
	input.push_back(inner);
      }
    }
  }
}

int main(){
  vector<vector<int> > input;
  prepare_input(input);
  UF uf(10);
  for(int i  = 0 ; i < input.size(); ++i){
    vector<int> tt = input[i];
    if(!uf.connect(tt[0],tt[1])){
      uf.do_union(tt[0],tt[1]);
    }
  }

  cout<<uf.connect(5,6)<<endl;
  cout<<uf.connect(1,2)<<endl;
  cout<<uf.connect(2,3)<<endl;
  return 0;
}
