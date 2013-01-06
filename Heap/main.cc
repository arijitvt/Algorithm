#include<iostream>
using namespace std;

int a[] =  {16,4,10,14,7,9,3,2,8,1};
 int SIZE = 10;
const int FIX_SIZE = SIZE;

int leftChild(int index){
  return (2*index)+1;
}

int rightChild(int index){
  return (2*index)+2;
}

void Max_Heapify(int index){
  int leftC = leftChild(index);
  int rightC = rightChild(index);

  int largest = -1;

  if(leftC< SIZE && a[leftC] > a[index]){
    largest = leftC;
  }else{
    largest = index;
  }

  if(rightC< SIZE && a[rightC] > a[largest]){
    largest = rightC;
  }

  if(largest != index){
    int temp = a[index];
    a[index] = a[largest];
    a[largest] = temp;
    Max_Heapify(largest);
  }
}

void Build_Heap(){
  for(int i = SIZE/2 ;i >= 1 ; --i ){
   Max_Heapify(i);
  }
}

void showArray(){
  for(int i= 0; i < FIX_SIZE; ++i){
    cout<<a[i]<<"\t";
  }
  cout<<endl;
}

// This function will do the heap sort.
int main(){
  Build_Heap();
  for(int i= SIZE-1; i >= 1; i-- ){
    int temp = a[0];
    a[0] = a[i];
    a[i] = temp;
    SIZE -- ;
    Max_Heapify(0);
  }
 showArray();
  return 0;
}
