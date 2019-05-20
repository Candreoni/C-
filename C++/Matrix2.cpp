// Matrix example 2 showing the principal diagonal

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			if(i==j){
				cout<<" "<<m1[i][j]<<endl;
			}
		}
	
	}
	
	
	getch();
	return 0;
}
