/* Program that defines a vector of numbers and
calculates the sum of the elements */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num[] = {1,2,3,4,5};
	int sum = 0;
	
	for (int i = 0; i<5; i++){
		sum += num[i];
	}
	
	cout<<"The sum of the elements of the vector is "<<sum<<endl;
	
	getch();
	return 0;
}
