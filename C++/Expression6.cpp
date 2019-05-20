/* Write a program that changes
calculates the average of the grades
of four different students */

#include<iostream>

using namespace std;

int main (){
	float g1,g2,g3,g4, avg = 0;
	
	cout<<("Please, insert the first grade --> "); cin>>g1;
	cout<<("Please, insert the second grade --> "); cin>>g2;
	cout<<("Please, insert the third grade --> "); cin>>g3;
	cout<<("Please, insert the fourth grade --> "); cin>>g4;
	
	avg = ((g1+g2+g3+g4)/4);
	
	cout.precision(2);
	cout<<("\nThe average of grades is = ")<<avg;
	
	
	
	return 0;
}
