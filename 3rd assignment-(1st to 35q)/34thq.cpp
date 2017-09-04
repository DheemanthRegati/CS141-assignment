#include<iostream>
using namespace std;
int main(){
    int y,a,b,x,n;
    cout<<"enter number ";
cin>>y;
a=y;
n=1;
b=a%10;
while(a>9){
           a=a/10;
           n=n*10;
           }
          y=(y%n)-b; 
         cout<<"The first digit is "<<a<<" digit and the last digit is "<<b<<"\n";
         cout<<"The new number is "<<((b*n)+y+a);
           cin>>x;
    return 0;}
