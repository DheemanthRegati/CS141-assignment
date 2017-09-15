#include<iostream>
using namespace std;

int main()
{
  int num,i,f,r,sum=0,temp;
  cout << "\nEnter a number: ";
  cin >> num;
  int j=1;
  while(j<=num)
  {
  temp=j;
  sum=0;
  while(temp>0)
  {
      i=1,f=1;
      r=temp%10;
      while(i<=r)
      {
        f=f*i;
        i++;
      }
      sum=sum+f;
      temp=temp/10;
  }
  if(sum==j)
     cout << j<< " is a strong number";
  j++;
 }
  return 0;
}
