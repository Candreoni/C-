/* Program that determines is the age (enter by user) is
between a range (18 -25 y/o) */

#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<("Please enter your age ");
	cin>>age;
	
	if(age >= 18 && age <= 25){
		cout<<("Your age is between 18 and 25 years");
	}
	else{
		cout<<("Your age is not between 18 and 25 years");
	}

	return 0;
}
