#include<iostream>
using namespace std;
int main()
{int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,x;
cout<<"Enter number ";
cin>>n;
for(n=n;n>0;n/=10){if((n%10)==0)
{a++;}
else if((n%10)==1)
{b++;}
else if((n%10)==2)
{c++;}
else if((n%10)==3)
{d++;}
else if((n%10)==4)
{e++;}
else if((n%10)==5)
{f++;}
else if((n%10)==6)
{g++;}
else if((n%10)==7)
{h++;}
else if((n%10)==8)
{i++;}
else if((n%10)==9)
{j++;}
}
    cout<<"The frequency of each number is as follows\n"<<b<<" ones \n"<<c<<" twos \n"<<d<<" threes \n"<<e<<" fours \n"<<f<<" fives \n"<<g<<" sixes \n"<<h<<" sevens \n"<<i<<" eights \n"<<j<<" nines \n"<<a<<" zeros \n";
        cin>>x;
    return 0;}
