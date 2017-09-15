#include<iostream>
using namespace std;
int main(){
    int a,y,p=1,x;
    cout<<"enter number ";
cin>>y;

while(y>0){
           a=y%10;
        p*=a;
        y/=10;}
         cout<<"The product is "<<p;
           cin>>x;
    return 0;}
