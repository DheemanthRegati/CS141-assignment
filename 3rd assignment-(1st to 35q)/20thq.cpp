#include<iostream>
using namespace std;
int main()
{ float b,g,x;
cout <<"Enter your basic salary ";
cin>>b;

if(b<=10000){
g=2*b;}
else if(b>10000||b<=20000){
g=(b/4)+(b*0.9);}
else{
g=(b*0.3)+(b*0.95);}      
cout<<"the gross salary is "<<g; 
      cin>>x;
      
        return 0;}
