#include <iostream>
using namespace std;

int main() {
   float p,t,r,si;
   
   cout<<"Enter the principal amount ";//works
   cin>>p;
   cout<<"Enter the time ";
   cin>>t;
   cout<<"Enter the interest rate(in percent) ";
   cin>>r;
   
   si=p*t*r/100;
   cout<<"Total amount due is "<<si;
   
    return 0;
}
    
