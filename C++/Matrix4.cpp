// Matrix example 4

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

	int m1[100][100], m2[100][100], x, r, c;
	
	cout<<"Please, enter the numbers of rows ";
	cin>>r;
	cout<<"Please, enter the numbers of columns ";
	cin>>c;
	
	srand(time(NULL)); // random number generation
	
	for(int i = 0; i<r; i++){
		for (int j = 0; j<c; j++){
			x = 1+rand()%(100);
			m1[i][j] = x;
		}
	}
	
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			m2[i][j] = m1[i][j];
		}
	}
	
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<" "<<m2[i][j];
		}
		cout<<"\n";
		
	}
	
	getch();
	return 0;
}
