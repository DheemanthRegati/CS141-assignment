#include<iostream>
using namespace std;
int main(){
    int a,n,b,x;
    cout<<"enter number ";
cin>>n;
a=n;
if(a==0){cout<<0;}
else{
while(a!=0){
            b=a%10;
            cout<<b;
            a/=10;}
}
cin>>x;
    return 0;}
