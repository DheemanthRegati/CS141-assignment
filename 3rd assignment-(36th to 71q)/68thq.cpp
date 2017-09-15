#include<iostream>
using namespace std;
int main()
{ 
    int dec,rem,quo;//copied as i don't know how arrays work
    int i=1,j,temp;
    char hexa[100];
    COUT<<"PROGRAM TO CONVERT DECIMAL TO HEXADECIMAL";
    cout<<"\n \n \nEnter any decimal number: ";
    cin>>dec;
    quo = dec;
    while(quo!=0)
    {
      temp = quo % 16;
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;
 
      hexa[i++]= temp;
      quo = quo / 16;
    }
    cout<<"nEquivalent hexadecimal number of "<<dec<<" is : ";
    for(j = i -1 ;j> 0;j--)
    cout<<hexa[j];
    cout<<endl;
    return 0;
}
