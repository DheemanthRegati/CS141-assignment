#include<iostream>
using namespace std;
int main()
{float a,b,c,s,x;
cout<<"enter a side";
cin>>a;
cout<<"enter another side";
cin>>b;
cout<<"enter another side";
cin>>c;
if((a+b)>c||(b+c)>a||(a+c)>b||a>-1||b>-1||c>-1){
               cout<<"triangle can exist";}
   else{cout<<"triangle can't exist";} cin>>x;        return 0;
}
