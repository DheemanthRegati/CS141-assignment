#include<iostream>
using namespace std;
int main()
{int a,n,x,s;
a=1;
cout<<"Enter number ";
cin>>n;
if(n<=0){cout<<"Program can't run";}
else{while(a<=10)
{s=a*n;
cout<<n<<"X"<<a<<"="<<s<<"\n";
a++;            
      }
 }
      cin>>x;
      return 0;  }
