// Matrix example 7

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[100][100], r, c;
	char f='F';
	
	cout<<"Enter the number of rows ";
	cin>>r;
	cout<<"Enter the number of columns ";
	cin>>c; 


	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<"Enter a number for ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}

	}
		
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<"\n";
	}	

	if(r==c){
		for(int i = 0; i<r; i++){
			for(int j = 0; j<c; j++){
				if(m1[i][j] == m1[j][i]){
					f = 'V';
				}
		}

	}
	if(f == 'V'){
		cout<<"\nThe matrix is simetrical ";
	}	
	}
	else{
		cout<<"\nThe matrix is not simetrical ";
	}

	getch();
	return 0;		
}
