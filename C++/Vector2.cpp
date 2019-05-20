/* Program that defines a vector of numbers and
calculates the multiplication of the elements */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n1[5] = {1,8,3,4,1};
	int m = 1;
	
	for (int i = 0; i<5; i++){
		m *= n1[i];
		
	}
	
	cout<<"The multiplication of the elements of the vector is "<<m<<endl;
	
	getch();
	return 0;
}
