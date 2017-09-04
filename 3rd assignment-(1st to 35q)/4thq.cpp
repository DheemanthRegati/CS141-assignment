#include<iostream>
using namespace std;
int main()
{int a,num,b,x;
cout <<"enter number ";
cin>>num;

a=num%11;
b=num%5;
    if(a==0&&b==0)
    {cout <<"number is divisible by 5 and 11";}
    else{cout<<"number is not divisible by 5 and 11";}
    cin>>x;        return 0;
}
