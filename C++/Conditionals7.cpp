/* Write a program that determines if a character is
a lowercase vowel, an uppercase vowel or is not a vowel */

#include<iostream>
#include<string>

using namespace std;

int main(){
	char l1;
	
	cout<<("Please enter a letter ");
	cin>>l1;
	
	switch(l1){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<("Is a lowercase vowel");break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<("Is a uppercase vowel");break;	
		default : cout<<("Is not a vowel");break;
	}
	
	return 0;
}
