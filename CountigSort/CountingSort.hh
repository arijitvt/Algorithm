#ifndef CONTING_SORT_HH
#define CONTING_SORT_HH

cons int MAX_SIZE = 100;

class ContingSort{
private:
  int inputArray[MAX_SIZE];
  int size;
  int fequencyArray[MAX_SIZE];
  int outputArray[MAX_SIZE];
public:
  ContingSort(int *arr,int s);
};

ContingSort::ContingSort(int *arr, int s){
  if(s < MAX_SIZE){  
    size = s;
    for(int i = 0 ; i < size; ++i){
    
    }
  }
}

#endif
