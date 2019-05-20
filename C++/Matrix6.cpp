// Matrix example 5

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[3][3];

	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<"Enter a number for ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	}	
	
	cout<<"\nThis is the original matrix \n";
	for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
			cout<<" "<<m1[i][j];
			}
		cout<<"\n";	
	}
		
		
	cout<<"\nThis is the transpose matrix \n";
	for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
			cout<<" "<<m1[j][i];
			}
		cout<<"\n";
		}	
		
	getch();
	return 0;		
}
