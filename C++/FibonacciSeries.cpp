// Program that caulculates the value of a Fibonacci series

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
	
int main(){
	
	int n1, x = 0, y = 1, z = 1; 
	
	cout<<"Enter a number "; cin>>n1;
	
	
	cout<<"1 ";
	for(int i=1; i<n1; i++){
	
	z = x + y; // 1 2 3 5 8
	cout<<z<<" "; // 1 2 3 5 8
	x = y; // 1 1 2 3 5
	y = z; // 1 2 3 5 8
	
	
	}


	
	cout<<"\n";
	
	getch();
	return 0;
}	

