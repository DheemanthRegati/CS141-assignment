#include<iostream>
using namespace std;
int main()
{char ch,x;
cout <<"enter the character ";
cin>>ch;
    if(isalpha(ch))
    {cout<<"It is an alphabet";}
    else if(isdigit(ch))
    {cout<<"It is a number";}
    else
    {cout<<"it is special character";}
    cin>>x;        return 0;
}
