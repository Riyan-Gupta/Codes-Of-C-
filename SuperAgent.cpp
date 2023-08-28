#include <iostream>
using namespace std;

int main() {
   char a[3][3];
   for(int i=0;i<=2;i++){
       for(int j=0;j<=2;j++){
           if(a[i][j]=='X' || a[i][j]=='.')
           {
           cin>>a[i][j];
           }
       }
   }
   for(int i=0;i<=1;i++){
      for(int j=1;j<=2;j++){
        if(a[0][0]==a[2][2]=='X' && a[i][j]==a[3-i][3-j]=='X' || '.'){
           cout<<"YES";
        }
        else{
           cout<<"NO";
        }
      }
   }

   
