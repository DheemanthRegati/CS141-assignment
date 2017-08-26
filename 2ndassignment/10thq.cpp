#include <iostream>
using namespace std;

int main() {
    int m;
 float a,b,c,d,e,avg,t,p;
 cout <<"Enter full marks for the exam";//works
 cin>>m;
 cout <<"\n Enter marks of 5 subjects";
 cin>>a>>b>>c>>d>>e;
 t=a+b+c+d+e;
 avg=t/5;
 p=avg*100/m;
 cout<<"\n average = "<<avg<<"\n Total = "<<t<<"\n Percentage = "<<p;
 
    return 0;
}
    
