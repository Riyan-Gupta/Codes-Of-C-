#include <iostream>
using namespace std;

int main() {
   int a;
   cin>>a;
   int b;
   cin>>b;
   int c;
   if(a>=b){
     c=a;
   }
   else{
     c=b;
   }
   int j=0;
   for(int i=c;i<=6;i++){
       j++;
   }
   cout<<j/6;
   
   
     
