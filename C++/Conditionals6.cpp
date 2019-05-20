// Program that determine if a character is upper or lower case 

#include<iostream>
#include<string>

using namespace std;

int main(){
	char l1;
	
	cout<<("Please enter a character ");
	cin>>l1;
	
	switch(l1){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<("Is a lowercase vowel");break;
		default : cout<<("Is not a lowercase vowel");break;
	}
	return 0;
}
