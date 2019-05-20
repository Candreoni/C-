// Write a program that calculates x^y whereas x and y are positive int without using the function "pow"

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int x, y, p = 1;
	
	cout<<"Enter the value of 'X' "; cin>>x;
	cout<<"Enter the value of 'Y' "; cin>>y;
	
	for (int i=1; i<=y; i++){
		p = p * x;
	}
		
	cout<<"\nThe result is: "<<p<<endl;
	
	getch();
	return 0;
}
