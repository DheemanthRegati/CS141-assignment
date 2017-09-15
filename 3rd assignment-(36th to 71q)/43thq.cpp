#include <iostream>

using namespace std;
int main(){
int a,b;
cout<<"Enter A Natural Number = ";
cin>>a;
cout<<"Factors Of "<<a<<" are = "<<endl;
for(b=1;b<=a;b++){
if (a%b==0)
cout<<b<<endl;

}
   return 0;
  }
