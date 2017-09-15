#include<iostream>
using namespace std;
int cube(int a)
{
    int c = a*a*a;
    return c;
}
int main()
{
    int a,c,x;
    cout << "Enter a number : ";
    cin >> a;
    c = cube(a);
    cout << "\nThe Cube of the number " << a << " is " << c;
    cin>>x;
    return 0;    
}
