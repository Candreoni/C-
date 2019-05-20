/* Program that gets age (int), sex(char), and height(float) in meters and show it to the user */

#include<iostream>

using namespace std;

int main(){
	int age;
	char gender[10];
	float height;
	
	cout<<("Please, enter your age:")<<endl; cin>>age;
	cout<<("Please, enter your gender:")<<endl; cin>>gender;
	cout<<("Please, enter your height:")<<endl; cin>>height;
	
	cout<<("\nYour age is: ")<<age<<(", your gender is: ")<<gender<<(" and your height is: ")<<height<<(" meters.");
	
	
	return 0;
}
