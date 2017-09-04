#include<iostream>
using namespace std;
int main()
{ float max,m,b,p,ch,co,avg,x;
cout<<"enter maximum marks ";
cin>>max;
cout<<"enter math marks ";
cin>>m;
cout<<"enter physics marks ";
cin>>p;    
cout<<"enter chemistry marks ";
cin>>ch;
cout<<"enter biology marks ";
cin>>b;
cout<<"enter computer marks ";
cin>>co;

avg=((m+b+p+ch+co)*100)/(5*max);

if(avg>=90)
{cout<<"Grade is A";}
else if(avg>=80||avg<90)
{cout<<"Grade is B";}
else if(avg>=70||avg<80)
{cout<<"Grade is C";}
else if(avg>=60||avg<70)
{cout<<"Grade is D";}
else if(avg>=40||avg<60)
{cout<<"Grade is E";}
else 
{cout<<"Grade is F";}
cin>>x;    return 0;
}
