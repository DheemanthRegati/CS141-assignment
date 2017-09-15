#include<iostream>
using namespace std;
int main(){
    int a,b,c=1,x;
    cin>>a;
    for(b=2;b<a;b++){
                     if((a%b)==0)
                     {cout<<"Its not prime";
                     c=1;
                     break;}
               c=0;      
                     }
    
    if(c==0){cout<<"It's prime";} 
    cin>>x;
    return 0;}
