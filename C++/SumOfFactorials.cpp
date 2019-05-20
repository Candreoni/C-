// Program that caulculates the value of 1!+2!+3!+4!+...+n! sum of factorials

#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	
	int n1, f = 1, s = 0;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
	
	f *= i;
	s += f;
		
	}

	
	
	cout<<"\nThe sum of factorials is: "<<s<<endl;
	
	getch();
	return 0;
}	

