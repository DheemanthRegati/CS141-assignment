#include<iostream>
using namespace std;
int main(){
    int x,a,n,b,c=0,y=2;//bin to dec
    cin>>n;
       while(n!=0){
  b=n%10;              
    c+=(b*y);            
         y*=2;       
         n/=10;    }   
                
            cout<<c;    
                
    cin>>x;
    return 0;}

