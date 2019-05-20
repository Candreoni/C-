// Loop example exercise

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n1, sum = 0;
	
	
	do{
		cout<<"Please enter a number "; cin>>n1;
			if(n1 > 0){
			sum += n1;
			}
		
	}while((n1 < 20) || (n1 > 30) && (n1 != 0));
	
	cout<<"\nThe sum is: "<<sum<<endl;	

	system("pause");
	return 0;
}
