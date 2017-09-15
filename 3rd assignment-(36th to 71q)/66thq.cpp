#include<iostream>
using namespace std;
int main(){
    int a,n,b,x,v=1,c=0;
    cout<<"enter number ";//dec to bin
cin>>n;
for(a=n;a>0;a/=2){
             b=(a%2)*(v);
             c+=b;
             v*=10;}
             cout<<c;

    cin>>x;
    return 0;
    
    }
