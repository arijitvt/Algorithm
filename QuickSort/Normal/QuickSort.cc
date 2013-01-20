#include<iostream>
#include<cstdlib>
using namespace std;

#include "QuickSort.hh"

int main(int argc, char **argv){
  int arr[] = {2,8,7,1,3,5,6,4};
  QuickSort *qSort = new QuickSort(arr,8);
  qSort->doQuickSort(0,7);
  qSort->showArray();
  return 0;
}
