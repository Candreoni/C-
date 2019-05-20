/* Program that defines a vector of numbers and
output the elements with their respective position */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int n1[100], n;
	
	cout<<"Please enter the number of elements of the arragement ";
	cin>>n;
	
	for (int i = 0; i<n; i++){
		cout<<"Please enter a number ";
		cin>>n1[i];
	}
	
	for (int i = 0; i<n; i++){
		cout<<i<<" -> "<<n1[i]<<endl;
	}
	
	
	getch();
	return 0;
}
