// Matrix example

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[100][100], r, c;
	
	cout<<"Please, enter the numbers of rows ";
	cin>>r;
	cout<<"Please, enter the numbers of columns ";
	cin>>c;
	
	for(int i = 0; i<r; i++){
		for (int j = 0; j<c; j++){
			cout<<"Enter a number for ["<<i<<"]["<<j<<"]: ";
			cin>>m1[i][j];
		}
	}
	
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
