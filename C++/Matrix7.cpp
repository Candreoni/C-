// Matrix example 6

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
	int m2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
		cout<<m1[i][j]<<" ";	
		}
		cout<<"\n";
	}	

	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
		cout<<m2[i][j]<<" ";	
		}
		cout<<"\n";
	}	
		
	cout<<"\nThe sum of the two matrixes is: \n";

	for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
			cout<<m1[i][j] + m2[i][j]<<" ";
			}
		cout<<"\n";
	}
		
		
	getch();
	return 0;		
}
