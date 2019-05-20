//Program that caulculates the value the descomposition in prime factors
#include<iostream>
#include<conio.h>

using namespace std;
	
int main(){
	int n1;
	
	cout<<"Enter a number ";
	cin>>n1;
	
	for(int i=2; n1>1; i++){
		while(n1%i==0){
			cout<<i<<" ";
			n1 /= i;
		}
	}

	getch();
	return 0;
}	

