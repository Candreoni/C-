// Make a program that simulates an ATM with an inital balance of 1000$

#include<iostream>

using namespace std;

int main(){
	float da, wa, blc = 1000; // blc = balance, da = deposit amount, wa = withdrawal amount. 
	int a; 
	char c;
	
	cout<<("Welcome to your ATM");
	cout<<("\nEnter the activity you want to perform"); 
	cout<<("\n1. for balance");
	cout<<("\n2. for deposit");
	cout<<("\n3. for withdrawal");
	cout<<("\n4. for exit")<<endl;
	cin>>a;

		switch(a){
		
		case 1:
			
			cout<<("Your balance is: ")<<blc;break;
			
		case 2:
			
			cout<<("Enter the deposit amount: ");
			cin>>da;
			blc = blc + da;
			cout<<("Your new amout is: ")<<blc;break;
			
		case 3:	
			cout<<("Enter the withdrawal amount: ");
			cin>>wa;
			
			if(wa < blc){
				blc = blc - wa;
				cout<<("Your new amout is: ")<<blc;
			}
			else{
				cout<<("Not enough balance ");break;
			}
			
			
		case 4:
			
			cout<<("Thanks for using the ATM ");break;
		}	
	
	
	return 0;
}
