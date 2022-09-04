#include<iostream>
using namespace std;

void findUnion(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0,cnt=0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i]){
        cout << arr2[j++] << " ";
        cnt++;
        }
       
        else {
            cout << arr2[j++] << " ";
            cnt++;
            i++;
        }
    }
    cout<<cnt<<endl;
    /* Print remaining elements of the larger array */
    // while (i < n1)
    //     cout << arr1[i++] << " ";
 
    // while (j < n2)
    //     cout << arr2[j++] << " ";
}
 

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    findUnion(arr1, arr2, n1, n2);
    return 0;
}