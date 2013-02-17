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
  int find_root(int item);

private:
  int input[MAX];
};

UF::UF(int range){
  for(int i  =0 ; i <MAX; ++i){
    input[i] = i;
  }
}


int UF::find_root(int item){
  int current = item;
  while(input[current] != current){
    current = input[current];
  }
  return current;
}

bool UF::connect(int p, int q){
  if(p < MAX && q <MAX){
    return find_root(p) == find_root(q);
  }
  return false;
}

void UF::do_union(int p, int q){
  input[q] = p;
}


#endif
