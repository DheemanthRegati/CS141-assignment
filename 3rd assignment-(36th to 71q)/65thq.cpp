#include<iostream>
using namespace std;
int main()
{
    int oct, dec = 0, rem, num, base = 1;//copied as i don't know how arrays work
    cout << "Enter the octal number(combination of digits 0 to 7) : ";
    cin >> num;
    oct = num;
    
        
    
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 8;
        num = num / 10;
    }
    
        
    int quo;
    int i=1,j,temp;
    char hexa[100];
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
    cout<<"Equivalent hexadecimal number of "<<oct<<" is : ";
    for(j = i -1 ;j> 0;j--)
    cout<<hexa[j];
    cout<<endl;
    return 0;
}
