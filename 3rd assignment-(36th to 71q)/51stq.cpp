#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int origNum, num, rem, sum=0 ,c;
  float digit,a,n,d;
  cout << "Enter a positive  integer: ";
  cin >> origNum;
  n=origNum;

  
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
    cout << "The Number Is Armstrong Number  " ;
} else 
{cout << "The Number Is Not An Armstrong Number  ";
       
 }
  
 cin >> d;

  return 0;
}
