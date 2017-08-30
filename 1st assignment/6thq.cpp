#include <iostream>
using namespace std;

int main() {
	float r,d,c,a;
	cout<< "Enter the radius";
	cin>>r;
	
	d=2*r;
	c=3.14*2*r;
	a=(3.14)*r*r;//the program doesn't work when 3.14 is replaced by 22/7. could you tell me why?There's no satisfactory answer with google. 
	
	cout<<"The diameter is "<<d<<", the circumference is "<<c<<" and the area is "<<a;
	return 0;
}
