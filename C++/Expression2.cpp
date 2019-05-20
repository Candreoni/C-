/* Write an expression on C++ part2  */

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, result = 0;
	
	cout<<("Please, enter the first value: "); cin>>a;
	cout<<("Please, enter the second value: "); cin>>b;
	cout<<("Please, enter the third value: "); cin>>c;
	cout<<("Please, enter the fourth value: "); cin>>d;
	
	result = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<("\nYour result is: ")<<result<<endl;
	
	return 0;
}
