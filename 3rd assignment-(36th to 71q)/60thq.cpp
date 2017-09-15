
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int bin, dec = 0, rem, num, base = 1,x;
    cout << "Enter the binary number(1s and 0s) : ";
    cin >> num;
    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    int oct = 0;
    int i = 1;

    while (dec!=0)
    {
        rem= dec%8;
        dec /= 8;
        oct += rem*i;
        i *= 10;
    }
    cout<<"The equivalent octal number of "<<bin<<" is "<<oct;
   cin>>x; return 0;
}
