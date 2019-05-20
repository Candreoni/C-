// Program that caulculates the value of 1*2*3*4...*n factorial

#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	
	int n1, f = 1;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
	
	f *= i;
		
	}
	
	cout<<"\nThe factorial is: "<<f<<endl;
	
	getch();
	return 0;
}	

