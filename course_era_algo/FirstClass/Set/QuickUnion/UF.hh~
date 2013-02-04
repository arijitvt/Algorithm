#ifndef UF_HH_
#define UF_HH_


#define MAX 10

#include<iostream>
using namespace std;



class UF{
public:
  UF(int);
  void do_union(int p, int q);
  bool connect(int p , int q);
  int find(int p);
  int count();

private:
  int input[MAX];
};

UF::UF(int range){
  for(int i  =0 ; i <MAX; ++i){
    input[i] = i;
  }
}

bool UF::connect(int p, int q){
  if(p < MAX && q <MAX){
    return input[p] == input[q];
  }
  return false;
}

void UF::do_union(int p, int q){
  int qid = input[q];
  int pid = input[p];
  for(int i  = 0 ; i < MAX; i++){
    if(input[i] == pid){
      input[i] = qid;
    }
  }
}


#endif
