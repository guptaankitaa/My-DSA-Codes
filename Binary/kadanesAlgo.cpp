#include<iostream>
using namespace std;

//Kadane Algorithm with 3 nested loops O(N^3) Compelexity
int kadaneAlogoN3(int arr[], int n){

    int maxs = INT32_MIN;
for(int i = 0;i<n;i++){
   for (int j = i; j < n; j++){
    int sum = 0;
    for (int k = i; k <= j; k++){
    sum = sum + arr[k];    
    }
    if(sum>maxs){
        maxs = sum;
     }
   }
}
return maxs;
}

// Kadanes Algorithm with 2 Nested Loops O(N^2) Complexity
int kadaneAlogoN2(int arr[], int n){
  for(int i=0;i<n;i++){
    for (int i = 0; i < n; i++) {
        
    }
    
  }
}

int main(){
int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<kadaneAlogoN3(arr,n);
cout<<kadaneAlogoN2(arr,n);
return 0;
}