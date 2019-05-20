// Program that caulculates the value of 1+3+5+...+2n-1

#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	
	int n1, r = 0;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=2*n1-1; i+=2){
	
	r = r + i;
		
	}
	
	cout<<"\nThe sum is: "<<r<<endl;
	
	getch();
	return 0;
}	
