#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    cout<<"enter number";
cin>>a;
b=0;
while(a>0){
           a=a/10;
           b++;
           }
           cout<<"The number has "<<b<<" digits";
           cin>>x;
    return 0;}
