#include<iostream>
using namespace std;
int maxElement(int arr[], int n){
// int ans = arr[0];
int ans = INT32_MAX;
for (int i = 0; i < n; i++)
{
    ans = min(ans,arr[i]);
}
return ans;
}

int main(){
int arr[5] = {5,2,7,4,5};
int n=5;
cout<<maxElement(arr,n);
return 0;
}