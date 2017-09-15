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
 c = (a<b) ? a:b;
 do {
 if (a%c==0 && b%c==0){
 cout<<"HCF = "<<c;
 break;
 }
 else c--;
 }
while (true);
  return 0;
  }
