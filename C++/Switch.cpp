/* 
Switch definition 
*/

#include<iostream>
#include<math.h>

using namespace std;

int main (){
	int num;
	
	cout<<("Enter a number between 1-5 "); cin>>num;
	
	switch(num){
		case 1: cout<<("The number is 1"); break;
		case 2: cout<<("The number is 2"); break;
		case 3: cout<<("The number is 3"); break;
		case 4: cout<<("The number is 4"); break;
		case 5: cout<<("The number is 5"); break;
		default: cout<<("The number is not between 1-5"); break;
	}
	
	return 0;
}
