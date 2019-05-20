/* 
Write a program that reads 3 grades from a one student
and calculate his final grade based on:
1. the practice part is 30% of the total
2. the theory part is 60%
3. Participation in class the remaining 10%
*/

#include<iostream>
using namespace std;

int main (){
	
	float pg, tg, rg, fg = 0; 

/*
pg = practice grade
tg = theory grade
rg = reamining grade
fg = final grade
*/	
		
	cout<<("Please, inster your practice grade: ")<<endl; cin>>pg;
	cout<<("Please, inster your theory grade: ")<<endl; cin>>tg;
	cout<<("Please, inster your remaining grade: ")<<endl; cin>>rg;
	
	fg = ((pg*0.3)+(tg*0.6)+(rg*0.1));
	
	cout.precision(2);
	cout<<("\nYour final grade is --> ")<<fg;
	
	return 0;
}
