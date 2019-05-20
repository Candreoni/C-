/* Write a program that reads 3 int numbers, then
enters a 4th numbers and determines if is any coincidence with
the other 3 numbers */

#include<iostream>
#include<math.h>

using namespace std;

int main (){
	int n1,n2,n3,n4;
	cout<<("Please enter 3 numbers: "); cin>>n1>>n2>>n3;
	cout<<("Please a 4th number: "); cin>>n4;
	
	if ((n4 == n1)|| (n4 == n2) || (n4 == n3)){
		cout<<("The fourth number coincides at leat with one of the 3 previous numbers ");
	}
	else{
		cout<<("The fourh number not coincide ");
	}
	
	
	return 0;
}
