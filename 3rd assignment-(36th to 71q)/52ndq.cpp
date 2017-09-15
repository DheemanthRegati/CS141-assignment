#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int origNum, num, rem, sum=0 ,c;
  float digit,a,n,d;
  cout << "Enter a positive  integer: ";
  cin >> origNum;
  

  for(n=1;n<=origNum;n++){
  num = origNum;
  c=num;
  
  
  while (num!=0)
{num=num/10;
a++;}

  while(c!=0 )
  {
      digit = c% 10;
      sum += pow ( digit , a);
      c/= 10;
  }

  if(sum == origNum){
   cout << sum<<endl;}
       
 break;
}
  
 cin >> d;

  return 0;
}
