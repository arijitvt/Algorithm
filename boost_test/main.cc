#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/tokenizer.hpp>
#include <vector>
#include <string>

using namespace std;
using namespace boost;

vector<string> lit;


void tokenize_string(string input){
	tokenizer<> token(input);
	for(tokenizer<>::iterator start = token.begin();  start != token.end(); ++start){
		lit.push_back(*start);
	}
}


void show_tokens(){

	for(vector<string>::iterator tok = lit.begin(); tok != lit.end(); ++tok){
		cout<<*tok<<endl;
	}
}

int main(){
	string ip;
	cout<<"Enter a  string : ";
	getline(cin,ip);
	tokenize_string(ip);
	show_tokens();
	return 0;
}
