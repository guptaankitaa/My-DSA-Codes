#include<iostream>
using namespace std;

class Heap {
    public:
    int arr[100];
    int size = 0;

    Heap(){
        arr[0] = -1;
        size = 0;
    }
void insert(int val){

    size = size + 1;
    int i = size;
    arr[i] = val;

    while(1<i){
       int parent = i/2;

       if(arr[parent] < arr[i]){
         swap(arr[parent],arr[i]);
         i = parent;
       }
       else{
        return;
       }
    }
}
void deleath(){

    if(size == 0){
        cout<<" Heap is empty";
        return;
    }

    arr[1] = arr[size];
    size--;
    
    int i = 1;
    int lchild = i * 2;
    int Rchild = i * 2+1;
    
     while(i < size){

    if(lchild <size && arr[lchild] > arr[i] ){
         swap(arr[i],arr[lchild]);
         i = lchild;
    }
    else if(Rchild <size && arr[Rchild] < arr[i] ){
        swap(arr[i],arr[Rchild]);
         i = Rchild;
    }
    else{
        return;
    }
   }
}
void print(){
    for(int j = 1; j <= size; j++){
        cout <<arr[j]<< " ";
    }cout<<endl;
}
};

int main(){
  
   Heap h;
   h.insert(50);
   h.insert(55);
   h.insert(53);
   h.insert(52);
  
   h.insert(54);
   h.print();
   h.deleath();
     h.print();
    return 0;
}

//TC = O(log n) 