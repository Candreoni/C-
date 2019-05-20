/* Write a program that reads two numbers and 
determine wich is the biggest one */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<("Enter two number "); cin>>n1>>n2;
	
	if(n1==n2){
		cout<<("The numbers are the same");	
	}
	else if(n1>n2){
		cout<<("The biggest is: ")<<n1;
	}
	else{
		cout<<("The biggest is: ")<<n2;
	}
	
	
	return 0;
}
