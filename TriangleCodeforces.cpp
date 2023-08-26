#include <iostream>
using namespace std;

int main() {
  int a[n];
  for(int i=0;i<n;i++){
     cin>>a[i];
  }
//Sort the array

//Condition
  for(int j=0;j<n-2;j++){
     for(int k=j+1;k<n-1;k++){
        for(int l=k+1;l<n;l++){
          if(a[j]+a[k]<a[l]){
             cout<<"IMPOSSIBLE";
          }
          else if(a[j]+a[k]>a[l]){
             cout<<"POSSIBLE";
          }
          else{
             cout<<"DEGENERATE";
          }
    return 0;
}
