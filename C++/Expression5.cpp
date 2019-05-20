/* Write a fragment of a program that changes
the values of two variables */

#include<iostream>

using namespace std;

int main(){
	float x,y,aux;
	
	cout<<("Insert the value for 'X': "); cin>>x;
	cout<<("Insert the value for 'Y': "); cin>>y;


	aux = x;
	x = y;
	y = aux;
	
	cout<<("\nThe new value for 'X' is: ")<<x<<endl;
	cout<<("\nThe new value for 'Y' is: ")<<y;
	
	return 0;
}
