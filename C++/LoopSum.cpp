// Program that caulculates the value of 1+2+3+...+n

#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	
	int n1, r = 0;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
	
	r = r + i;
		
	}
	
	cout<<"\nThe sum is: "<<r<<endl;
	
	getch();
	return 0;
}	
