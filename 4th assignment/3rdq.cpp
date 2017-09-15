#include<iostream>
using namespace std;
int compare(int a,int b)
{
     if(a>b)
      return a;
     else if(b>a)
      return b;
      else
      {cout<<"both number are same!";
      return 0;}
}
int main()
{
    int a,b,c,x;
    cout << "Enter two numbers respectively : ";
    cin >> a >> b;
    c=compare(a,b);
    cout<<c;
    cin>>x;
    return 0;    
}
