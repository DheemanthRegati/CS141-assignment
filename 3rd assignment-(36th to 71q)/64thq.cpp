#include<iostream>
using namespace std;
int main(){
    int x,n,b,c=0,v=1;// oct to dec
    
    cin>>n;
    while(n!=0){
    b=n%10;
    c+=b*v;
    n/=10;
    v*=8;}
    cout<<c;
    cin >> x;
    return 0;}
