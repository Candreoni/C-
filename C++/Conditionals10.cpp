/* 
Program that converts an int to roman number
M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/
#include<iostream>
using namespace std;

int main(){
	int n1,u,t,h,m;
	cout<<("Please enter the number you want to convert ");
	cin>>n1;
	//n1 = 2152 --> 2000+100+50+2 divide in units, tens, hundreds and thoudsands
	
	u = n1%10; n1 = n1 /= 10; // units = 2 --> n1 = 2152 / 10 = 215
	t = n1%10; n1 = n1 /= 10; // tents = 5 --> n1 = 215 / 10 = 21
	h = n1%10; n1 = n1 /= 10; // hundreds = 1 --> n1 = 21 / 10 = 2
	m = n1%10; n1 = n1 /= 10; // thoudsands = 2 --> n1 = 0
	
	switch(m){
		case 1: cout<<"M"; break;
		case 2: cout<<"MM"; break;
		case 3: cout<<"MMM"; break;
	}
	switch(h){
		case 1: cout<<"C"; break;
		case 2: cout<<"CC"; break;
		case 3: cout<<"CCC"; break;
		case 4: cout<<"CD"; break;
		case 5: cout<<"D"; break;
		case 6: cout<<"DC"; break;
		case 7: cout<<"DCC"; break;
		case 8: cout<<"DCCC"; break;
		case 9: cout<<"CM"; break;
	}
		switch(t){
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
		case 3: cout<<"XXX"; break;
		case 4: cout<<"XL"; break;
		case 5: cout<<"L"; break;
		case 6: cout<<"LX"; break;
		case 7: cout<<"LXX"; break;
		case 8: cout<<"LXXX"; break;
		case 9: cout<<"XC"; break;
	}
		switch(u){
		case 1: cout<<"I"; break;
		case 2: cout<<"II"; break;
		case 3: cout<<"III"; break;
		case 4: cout<<"IV"; break;
		case 5: cout<<"V"; break;
		case 6: cout<<"VI"; break;
		case 7: cout<<"VII"; break;
		case 8: cout<<"VIII"; break;
		case 9: cout<<"IX"; break;
	}
	return 0;
}
