#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,f,fac,sum=0,i ;
    float c;
    cout <<"Enter a number : ";
    cin>> a;
    b=a;
    while (b!=0)
    {
          c=b%10;
          fac =1;
          for (i=1;i<=c;i++ )
          {
          fac *= i;
          }
          sum = sum + fac;
          b/= 10;
    }
          if (sum == a)
              cout << "The Given Number Is A Strong Number";
          else 
              cout << "The Given Number Is Not A Strong Number";
    
                 
  
                 cin >> f;

  return 0;
}
