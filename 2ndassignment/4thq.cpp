#include <iostream>
using namespace std;

int main() {
    int y,d,w,x,D;
    
    cout<<"enter the number of days";
    cin>>d;
    
    y=d/365;
    x=d%365;
    w=x/7;
    D=x%7;
    cout<<"the timespan is "<<y<<" year(s), "<<w<<" week(s), and"<<D<<"day(s).";
    
    return 0;
}
    
