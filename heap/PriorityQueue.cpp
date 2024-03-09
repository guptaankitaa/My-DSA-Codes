#include<bits/stdc++.h>
using namespace std;

int main(){

   priority_queue<int> pq;

   pq.push(4);
   pq.push(2);
   pq.push(1);
   pq.push(8);

   cout<< pq.top()<<endl;
   pq.pop();
   cout<< pq.size()<<endl;
   
  
    return 0;
}