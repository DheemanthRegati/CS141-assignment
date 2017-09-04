#include<iostream>
using namespace std;
int main()
{int u,x;
float b,tb;

cout<<"enter units consumed ";
cin>>u;
if(u<=50){
b=u*0.5;
cout<<"your bill is "<<b;}
else if(u>50||u<=150){
b=(50*0.5)+((u-50)*0.75);}    
else if(u>150||u<=250){
b=(50*0.5)+(100*0.75)+((u-150)*1.2);}
else {
b=(50*0.5)+(100*0.75)+(100*1.2)+((u-250)*1.5);}

tb=b*1.2;
cout<<"your bill is "<<tb;
    cin>>x;
    return 0;
    }
