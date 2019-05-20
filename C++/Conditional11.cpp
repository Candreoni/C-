/* Program that shows the month depending on a number that the users
inputs (1-12) */

#include<iostream>

using namespace std;

int main(){
	int n1;
	cout<<("Please enter a number: ");
	cin>>n1;
	
	switch(n1){
		case 1: cout<<("Your month is January");break;
		case 2: cout<<("Your month is February");break;
		case 3: cout<<("Your month is March");break;
		case 4: cout<<("Your month is April");break;
		case 5: cout<<("Your month is May");break;
		case 6: cout<<("Your month is June");break;
		case 7: cout<<("Your month is July");break;
		case 8: cout<<("Your month is August");break;
		case 9: cout<<("Your month is Septermber");break;
		case 10: cout<<("Your month is October");break;
		case 11: cout<<("Your month is November");break;
		case 12: cout<<("Your month is December");break;
		default: cout<<("Your number is invalid");break;
	}
	
	return 0;
}
