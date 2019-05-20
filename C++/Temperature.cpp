/* Program that takes the temperature every 4 hours in daily basis, it means, 6 times a day
and calculates the avg temperature, highest and lowest */

#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	float temp, h = 0, l = 999, sum = 0, avg = 0;
	
	for(int i = 0; i < 24; i += 4){
		cout<<"Enter the temperature of the hour "<<i<<": ";
		cin>>temp;
		sum += temp;
		
		if(temp > h){
			h = temp;
		}
		if(temp < l){
			l = temp;
		}
	}
	
	avg = sum / 6;
	
	cout.precision(1);
	cout<<"\nThe highest temperature of the day was "<<h<<", "<<endl;
	cout<<"The lowest temperature of the day was "<<l<<", "<<endl;
	cout<<"The average of the temperatures of the day was "<<avg<<endl;
	
	
	getch();
	return 0;
}
