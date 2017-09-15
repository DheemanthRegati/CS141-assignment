#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c=0,x,s=0,y;
    float p;
    cout<<"Enter number ";
    cin>>a;
    b=a;
    y=a;
    while(b!=0){b/=10;
    c++;}
          
    for(c=c;c>=0;c--){
                      p=(c-1);
    s +=((a%10)*(pow(10,p)));
    a/=10;}
    if(s==y){cout<<"number is a palindrome";}
    else{cout<<"number is not a palindrome ";}
    cin>>x;
    
    
    return 0;}
