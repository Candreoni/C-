/*
Program that reads two cathetus of a triangle and 
outputs the hypotenuse.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float c1,c2,h1 = 0;
	cout<<("Input the first side of the triangle "); cin>>c1;
	cout<<("Input the second side of the triangle "); cin>>c2;

	h1 = sqrt(pow(c1,2)+(pow(c2,2)));

	cout.precision(2);
	cout<<("\nThe hypotenuse of the triangle is: ")<<h1<<endl;
	
	return 0;	
}

