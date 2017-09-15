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
    for(s=s;s>0;s/=10)
    {
    if((s%10)==0)
{cout<<"zero ";}
else if((s%10)==1)
{cout<<"one ";}
else if((s%10)==9)
{cout<<"nine ";}
else if((s%10)==2)
{cout<<"two ";}
else if((s%10)==3)
{cout<<"three ";}
else if((s%10)==4)
{cout<<"four ";}
else if((s%10)==5)
{cout<<"five ";}
else if((s%10)==6)
{cout<<"six ";}
else if((s%10)==7)
{cout<<"seven ";}
else if((s%10)==8)
{cout<<"eight ";}}   cin>>x;
    
    
    return 0;}
