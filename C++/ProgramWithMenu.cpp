/* Program with a menu  --> option 1 = Cube of a number
							option 2 = Even or Odd number 
							option 3 = Exit
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a, n2;
	float r,n1;
	
	cout<<("Please enter the action you want to perform");
	cout<<("\n\tOption 1 = Cube of a number");
	cout<<("\n\tOption 2 = Even or Odd number");
	cout<<("\n\tOption 3 = Exit")<<endl;
	cin>>a;
	
	switch (a){
		case 1:
		
		cout<<("Please enter a number ");
		cin>>n1;
		
		r=pow(n1,3);
		
		cout<<("The cube of the number you entered is: ")<<r;break;
			
			
		case 2:
		
		cout<<("Please enter a number ");
		cin>>n2;	
		
		if(n2 % 2 == 0){
		cout<<("The number you entered is even	");
		}
		else
		{
			cout<<("The number you entered is odd	");break;
		}	
		
		case 3:
		
		cout<<("Thanks for using the program ");break;
		
	}
	return 0;
}
