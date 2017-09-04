#include<iostream>
using namespace std;
int main()
{int m,x,tk,fh,th,hu,ft,tw,te,fi,a,b,c,d,e,f,g,h;
    cout<<"enter value ";
    cin>>m;
    tk=m/2000;
    a=m%2000;
    fh=a/500;
    b=a%500;
    th=b/200;
    c=b%200;
    hu=c/100;
    d=c%100;
    ft=d/50;
    e=d%50;
    tw=e/20;
    f=e%20;
    te=f/10;
    g=f%10;
    fi=g/5;
    h=g%5;
    
    cout<<"the denominations are\n"<<tk<<"--2000 notes \n"<<fh<<"--500 notes \n"<<th<<"--200 notes \n"<<hu<<"--100 notes \n"<<ft<<"--50 notes\n"<<tw<<"--20 notes\n"<<te<<"--10 notes\n"<<fi<<"--5 notes\n"<<h<<"--coins";
    
    cin>>x;
    return 0;}
