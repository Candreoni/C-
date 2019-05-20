/* Program that reads an int value and 
determines if it's even or odd */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n1;
	cout<<("Please, enter a number ");
	cin>>n1;
	
	if(n1 % 2 == 0){
		cout<<("The number you entered is even	");
	}
	else
	{
		cout<<("The number you entered is odd	");	
	}
		
	return 0;
}
