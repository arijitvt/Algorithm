#include<iostream>
#include<vector>
using namespace std;

#define nill -1
#define big 0 
#define small 2

bool isRelation(int first, int sec, int *rel){
  if(*rel == nill){
    *rel = first > sec ? big : small;
    return true;
  }
  int newrel = first > sec ? big : small;
  return newrel == rel ;
}

int main(){
  int size  = 9 ;
  int input[] = {2,8,4,7,9,12,15,0,5};
  vector<int> stack;
  int status = nill;
  
  stack.push_back(input[0]);

  for(int i  = 1 ; i < size; ++i){
    if(isRelation(input[i-1],input[i],&status){

      }
  }
  return 0;
}
