#include <iostream>
using namespace std;

int prime(int j)
{ 
  int count=0;
  int c=j;
  for(int i=2;i<c;i++)
  {
   if(c%i==0)
   count++;
  }
  return count;
}
int main()
{
  int num1=0,num2=0,x;
  cout<<"\nENTER THE LOWER LIMIT: ";
  cin>>num1;
  cout<<"ENTER THE UPPER LIMIT: ";
  cin>>num2;
  int j=num1;
  cout<<endl<<endl;
  while(j<=num2)
  {
  int count1=prime(j);
  if(count1==0)
    cout<<"\n"<<j<<" is a prime number.";
  j++;
  }
 cin>>x;
  return 0;
}
