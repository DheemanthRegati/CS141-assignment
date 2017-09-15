#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c=0,i;
    cout << "Enter A Number : ";
    cin>> a;
    for(i=1;i<=a/2;i++){
                      if(a%i==0){
                                c+=i;
                                } }
                                if (c==a){ 
                                          cout<<"The Number Is A Perfect Number !";
                                          }else {cout<<"The Number Is Not A Perfect Number ! ";
                                          }
                                          
                                          cin>>b;
                                      
return 0;
}
