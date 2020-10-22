#include<bits/stdc++.h>
using namespace std;
int x=0;

int func(int n){

  if(n>0){
    x++;
    return func(n-1)+x;
  }
  return 0;
}
int main(){
  int a=5;
  int r=func(a);
  cout<<r<<endl;

  int v=func(a);
  cout<<v<<endl;
  return 0;
}
