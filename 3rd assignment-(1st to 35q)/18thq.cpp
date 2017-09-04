#include<iostream>
using namespace std;
int main()
{float cp,sp,n,x;
cout<<"Enter cost of production \n";
cin>>cp;
cout<<"Enter selling price \n";
cin>>sp;

n=sp-cp;

if(n>0){cout<<"Profit of "<<n<< " was made";}
else if(n<0) {cout<<"Loss of "<<(-1*n)<<" was made";}
else{cout<<"No net profit or loss ";}
cin>>x;
    return 0;}
