#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
for (int i = 0; i < size; i++)
{
    if (arr[i]==key)
    {
        return i+1;
    }
}
    return -1;
}
int main(){
int arr[5] = {1,2,3,4,5};
cout<<linearSearch(arr,5,5)<<endl;
return 0;
}