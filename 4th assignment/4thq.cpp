#include <iostream>
using namespace std;


int odd_even(int num)
{
  if((num%2==0))
    return 0;
  else
    return 1;
}
int main()
{
  int a,x;
  cout<<"Enter the number ";
  cin>>a;
  int n=odd_even(a);
  if(n==0)
    cout<<"It is an even number";
  else
    cout<<"It is an odd number";
  cin>>x;
  return 0;
}
