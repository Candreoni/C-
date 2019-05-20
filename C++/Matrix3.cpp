// Matrix example 3, fill a 2x2 matrix and copy the content into a new matrix

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[2][2] = {{1,2},{3,5}}, m2[2][2], r, c;

	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			m2[i][j] = m1[i][j];
		}
	
	}
	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			cout<<" "<<m2[i][j];
		}
	
	}
	
	
	getch();
	return 0;
}
