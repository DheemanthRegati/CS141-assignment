#include<iostream>
#include<math.h>
using namespace std;
void circle(float r)
{
     float d,a,c;
     d=2*r;
     cout<<"\nDiameter of the circle : "<<d;
     a=(3.14)*r*r;
     cout<<"\nArea of the circle : "<<a;
     c=2*(3.14)*r;
     cout<<"\nCirumference of the circle : "<<c;
}
int main()
{
    float r,x;
    cout << "Enter the radius of circle : ";
    cin >> r;
    circle(r);
    cin>>x;
    return 0;    
}
