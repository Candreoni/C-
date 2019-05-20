// Program that caulculates a random number and count how many times it miss match the number entered by the user 
// "Magic Number"

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
	
int main(){
	
	int n1, n2, t = 0;
	
	srand(time(NULL));
	n2 = 1 + rand() % (100);
	
	
	do{
		cout<<"Enter a number "; cin>>n1;
		
		if(n1>n2){
			cout<<"\nThe number is smaller "<<"\n";
		}
		if(n1<n2){
			cout<<"\nThe number is bigger "<<"\n";
		}
		
		t++;
			
	}while(n1 != n2);

	cout<<"Congratulations, you match the random number ";
	cout<<"\nThe number of times you didn't match was "<<t<<endl;
	
	
	
	system("pause");
	return 0;
}	

