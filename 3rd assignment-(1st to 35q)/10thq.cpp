#include<iostream>
using namespace std;
int main()
{char ch,x;
cout <<"enter the character ";
cin>>ch;
    if(isalpha(ch))
    {if(ch>64||ch<91)
    {cout<<"It is uppercase";}
    else{          
    cout <<"It is lowercase";}}
    else{cout<<"It is not an alphabet";}
    cin>>x;        return 0;
}
