#include<iostream>
using namespace std;
int main()
{char ch,x;
cout <<"enter the character ";
cin>>ch;
    if(isalpha(ch))
    {if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==65||ch==69||ch==73||ch==79||ch==85)
    {cout<<"It is a vowel";}
    else{          
    cout <<"It is a constant";}}
    else{cout<<"It is not an alphabet";}
    cin>>x;        return 0;
}
