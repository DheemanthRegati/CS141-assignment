#include<iostream>
using namespace std;
int main()
{int m,x;
    cout<<"enter month number ";
    cin>>m;
    if(m<12){
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {cout<<"the month has 31 days";}
    else if(m==2)
    {cout<<"the month has 28 days or 29 if it's a leap year";}
    else
    {cout<<"the month has 30 days";}}
    else
    {cout<<"month doesn't exist";}
    cin>>x;
    return 0;}
