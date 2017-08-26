#include <iostream>
#include<cmath>
using namespace std;

int main() {
    float e,b,a;
    
    cout<<"enter the base ";//works
    cin>>b;
    cout<<"enter the exponent ";
    cin>>e;
    
    a=pow(b,e);
   cout<<"the answer is "<<a; 
    return 0;
}
    
