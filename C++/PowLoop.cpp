// Program that caulculates the value of (2^1+2^2+2^3+...+2^n)

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
	
int main(){
	
	int n1, r = 0;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
	
	
	r += pow (2,i);	
	}

	
	
	cout<<"\nThe sum of (2^1+2^2+2^3+...+2^n) is: "<<r<<endl;
	
	getch();
	return 0;
}	

