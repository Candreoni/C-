// Loop exercise 

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
	
int main(){
	
	float e1, e2, e3; 
	int p3 = 0, p2 = 0, pl = 0;
	
	for(int i=1; i<=5; i++){
		cout<<"Enter the grade of the first exam ";
		cin>>e1;
		cout<<"Enter the grade of the second exam ";
		cin>>e2;
		cout<<"Enter the grade of the third exam ";
		cin>>e3;
		cout<<"\n";
		
		if((e1>=10) && (e2>=10) && (e3>=10)){
			p3++; 
		} 
		if ((e1>=10) || (e2>=10) || (e3>=10)){
			p2++;	
		}
		if((e1<10) && (e2<10) && (e3>=10)){
			pl++;
		}
		}
	
	cout<<"\nThe sudents that passed all the exams: "<<p3<<endl;
	cout<<"\nThe sudents that passed at least one exam: "<<p2<<endl;
	cout<<"\nThe sudents that only passed the last exam: "<<pl<<endl;
	
	getch();
	return 0;
	}
	



