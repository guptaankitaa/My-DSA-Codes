#include<bits/stdc++.h>
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
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

};

void heapify(int arr[],int n,int i){

 int temp = i;
 int left = 2*i;
 int right = 2*i+1;

 if(left <= n && arr[temp] < arr[left]){
    temp = left;
 }
 if(right <= n && arr[temp] < arr[right]){
    temp = right;
}

if(temp != i){
    swap(arr[temp],arr[i]);
    heapify(arr,n,temp);
}
}

void heapsort(int arr[],int n ){
   
    int t = n;
    while(t > 1){
    swap(arr[t],arr[1]);
    t--;
    
    heapify(arr,t,1);
}
}
int main(){

    int arr[8] = {-1,51,55,40,38,50,60,72};
    int n = 7;
    // int arr[6] = {-1,54,53,55,52,50};
    // int n = 5;
    for(int i = n/2 ; i>0 ; i--){
        heapify(arr,n,i);
    }
    for(int i = 1; i<=n; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;

    heapsort(arr,n);

    for(int i = 1; i<=n; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;

    return 0;
}
