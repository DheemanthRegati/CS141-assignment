#include <iostream>
#include<cmath>
using namespace std;

int main() {
   float p,t,r,ci,n=1,a,b;
   
   cout<<"Enter the principal amount ";//works
   cin>>p;
   cout<<"Enter the time ";
   cin>>t;
   cout<<"Enter the interest rate(in percent) ";
   cin>>r;
   a=r/(n*100);
   a++;
   b=n*t;
   ci=p*pow(a,b);
   cout<<"Total amunt is "<<ci;
    return 0;
}
    
