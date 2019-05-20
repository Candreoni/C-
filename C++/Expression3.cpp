/* Write an expression on C++ part3  */

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, result = 0;
	
	cout<<("Insert the 1st value --> "); cin>>a;
	cout<<("\nInsert the 2nd value --> "); cin>>b;
	cout<<("\nInsert the 3rd value --> "); cin>>c;
	cout<<("\nInsert the 4th value --> "); cin>>d;
	cout<<("\nInsert the 5th value --> "); cin>>e;
	cout<<("\nInsert the 6th value --> "); cin>>f;
	
	result = (a+(b/c))/(d+(e/f));
	
	cout.precision(2);
	cout<<("\n\nThe result is= ")<<result<<endl;
	
	return 0;
}
