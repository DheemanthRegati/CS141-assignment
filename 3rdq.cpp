#include <iostream>
using namespace std;

int main() {

float num1,num2,sum,diff,prod,div;

cout << "enter first number";
cin >>num1;
cout << "Enter second number";
cin>>num2;

sum=num1+num2;
diff=num1-num2;
prod=num1*num2;
div=num1/num2;

cout<< "the sum is "<<sum<<", the difference is "<<diff<<", the product is "<<prod<<", the quotient is "<<div;

return 0;
}
