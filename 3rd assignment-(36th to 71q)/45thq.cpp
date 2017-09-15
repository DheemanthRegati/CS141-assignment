#include <iostream>
#include <cmath>

using namespace std;

  int main()
  {
 int a,b,c;
 cout<<"Enter First Number = ";
 cin>>a;
 cout<<"Enter Second Number = ";
 cin>>b;
 c = (a>b) ? a:b;
 do {
 if (c%a==0 && c%b==0){
 cout<<"LCM = "<<c;
 break;
 }
 else c++;
 }
while (true);
  return 0;
  }
