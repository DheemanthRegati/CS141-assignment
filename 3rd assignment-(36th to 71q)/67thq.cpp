#include<iostream>
using namespace std;
int main(){
    int a,n,b,x,v=1,c=0;
    cout<<"enter number ";//dec to oct
cin>>n;
for(a=n;a>0;a/=8){
             b=(a%8)*(v);
             c+=b;
             v*=10;}
             cout<<c;

cin>>x;
    return 0;}
