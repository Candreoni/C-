// Program that caulculates the value of 1-2+3-4+5-6...n

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
	
int main(){
	
	int n1, rp = 0, rn = 0, rt = 0;
	
	cout<<"Enter a number "; cin>>n1;
	
	for(int i=1; i<=n1; i++){
	
	if( i % 2 == 0){
		rn +=  - i; // -2
	}
	else{
		rp += + i; // 1 + 3
	}
	
	}

	rt = rp + rn;
	
	cout<<"\nThe sum of (1-2+3-4+5-6...n) is: "<<rt<<endl;
	
	getch();
	return 0;
}	

