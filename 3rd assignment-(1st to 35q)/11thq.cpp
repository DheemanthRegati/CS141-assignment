#include<iostream>
using namespace std;
int main()
{int wd,d,x;
cout<<"Enter the number";
cin>>wd;

d=wd%7;
if(d==1){cout<<"the day is monday";}
if(d==2){cout<<"the day is tuesday";}
else if(d==3){cout<<"the day is wednesday";}
else if(d==4){cout<<"the day is thursday";}
else if(d==5){cout<<"the day is friday";}
else if(d==6){cout<<"the day is saturday";}
else{cout<<"the day is sunday";}cin>>x;    return 0;
}
