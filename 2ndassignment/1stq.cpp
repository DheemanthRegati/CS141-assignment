#include <iostream>
using namespace std;

int main() {
    float cm,m,km;
    
    cout<<"enter length in centimeter";
    cin>>cm;
    
    m=cm/100;
    km=m/1000;
    
    cout<<"the length is "<<m<<" meters or "<<km<<"kilometers";
    
    return 0;
}
    
    
