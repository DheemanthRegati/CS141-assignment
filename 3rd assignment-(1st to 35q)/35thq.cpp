#include<iostream>
using namespace std;
int main(){
    int a,y,s=0,x;
    cout<<"enter number ";
cin>>y;

while(y>0){
           a=y%10;
        s+=a;
        y/=10;}
         cout<<"The sum is "<<s;
           cin>>x;
    return 0;}
