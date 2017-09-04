#include<iostream>
using namespace std;
int main(){
   float num1,num2,num3,x;
   cout << "enter first number";
cin >>num1;
cout << "Enter second number";
cin>>num2;
cout << "Enter third number";
cin>>num3;
if (num1>num2){
if(num3>num1){cout<<num3<<"is the maximum";}
else{cout<<num1<<"is the maximum";}}
else{
     if(num3>num2){cout<<num3<<"is the maximum";}
else{cout<<num2<<"is the maximum";}}
cin>>x;
return 0;}               
