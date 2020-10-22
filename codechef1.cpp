#include<iostream>
#include<cstdlib>
using namespace std;
 int main(){
   int T;
   cin>>T;
   int arr[10000];
   for(int i=0;i<T;i++){
     int N;
     cin>>N;
     for(int i=0;i<N;i++){
       cin>>arr[i];
     }
     int count=0;
     for(int i=0;i<(N-1);i++){
       int x;
       x=abs(arr[i+1]-arr[i]);
       count=count+x;
       if(arr[i+1]!=arr[i]){
         count=count-1;
       }
     }
     cout<<count<<endl;
   }
   return 0;
 }
