//Program that calculates the value of a given expresion

#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float x,y,fcn = 0; //fcn for function --> f(x,y)
	
	cout<<("Entry 'X' -->"); cin>>x;
	cout<<("Entry 'Y' -->"); cin>>y;
	
	fcn = ((sqrt(x))/((pow(y,2))-1));
	
	cout.precision(2);
	cout<<("/nThe result for f(x,y) is = ")<<fcn<<endl;
	
	return 0;
}

