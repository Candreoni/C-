/* Program that determines the biggest number
between three different numbers  */

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<("Please, enter three numbers "); 
	cin>>n1>>n2>>n3;
	
	if(n1>=n2 && n1>=n3){
		cout<<("The biggest number is ")<<n1;
	}
	else if(n1<=n2 && n2>=n3){
		cout<<("The biggest number is ")<<n2;
	}
	else{
		cout<<("The biggest number is ")<<n3;
	}
	
	return 0;
}
