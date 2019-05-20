/* Write a program that calculates the solutions of 
one second grade ecuation --> cuadratic ecuation */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c, x1 = 0, x2 = 0;
	
	cout<<("Insert the value for 'A' --> "); cin>>a;
	cout<<("Insert the value for 'B' --> "); cin>>b;
	cout<<("Insert the value for 'C' --> "); cin>>c;
	
	x1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	x2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout<<("\nThe result for your ecuation is = ")<<x1<<(" and ")<<x2<<endl;

	
	return 0;
}
