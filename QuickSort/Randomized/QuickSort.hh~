#ifndef QUICK_SORT_HH_
#define QUICK_SORT_HH_

const int MAX_SIZE = 10;

class QuickSort{
private:
  int inputArray[MAX_SIZE];
  int size;
private:
  void doSwap(int *first, int *sec){
    int temp = *first;
    *first = *sec;
    *sec = temp;    
  }

  int doPartition(int start,int pivot){
    int x = inputArray[pivot];
    int i = start -1;
    for(int  j = start; j < pivot; ++j){
      if(inputArray[j] <= inputArray[pivot]){
	i++;
	doSwap(&inputArray[i], &inputArray[j]);
      }
    }
    doSwap(&inputArray[i+1],&inputArray[pivot]);
    return i+1;
  }

public:
  QuickSort(int *arr, int s);
  void showArray();
  void doQuickSort(int start,int pivot);
};


QuickSort::QuickSort(int *arr, int s){
  if(size < MAX_SIZE){
    size = s; 
    for(int i = 0 ; i < size; ++i){
      inputArray[i] = *(arr+i);
    }
  }
}

void QuickSort::showArray(){
  cout<<endl;
  for(int i = 0 ; i < size; ++i){
    cout<<inputArray[i]<<"\t";
  }
  cout<<endl;
}

void QuickSort::doQuickSort(int start, int pivot){
  int q;
  if(start  < pivot){
    q = doPartition(start,pivot);
    doQuickSort(start, q-1);
    doQuickSort(q+1,pivot);
  }
}

#endif
