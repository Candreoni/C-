// Matrix example 9

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[3][3] = {{1,2,1},{2,1,1},{2,1,2}};
	int m2[3][3] = {{3,2,1},{2,3,1},{1,1,3}};
	int m3[3][3];


	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
		m3[i][j] = 0;
		for(int k = 0; k<3; k++){
			m3[i][j] = m3[i][j] + m1[k][j] * m2[k][j];
		}
		}
	}
	
	cout<<"The new matrix is: \n";
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
		cout<<m3[i][j]<<" ";
		}
		cout<<"\n";
	}

	getch();
	return 0;		
}
