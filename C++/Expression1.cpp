/* Write an expression on C++  */

#include<iostream>

using namespace std;

int main(){
	float a,b, result=0; 
	
	cout<<("Please enter the first value "); cin>>a;
	cout<<("\nPlease enter the second value "); cin>>b;
	
	result = (a/b) + 1;
	
	cout.precision(2);
	cout<<("\nYour result is: ")<<result<<endl;
	
	return 0;

}
