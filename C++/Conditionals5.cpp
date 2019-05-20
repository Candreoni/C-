// Program that determine if a number is positive or negative

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float n1;
	
	cout<<("Enter a number ");
	cin>>n1;
	
	if(n1 == 0){
		cout<<("Your number is zero")<<endl;
	}
	else if(n1 > 0){
		cout<<("Your number is positive")<<endl;
	}
	else{
		cout<<("Your number is negative")<<endl;
	}
	return 0;
}
