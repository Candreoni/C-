#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
	int x;
	srand(time(NULL));
	x = 1+rand()%(10);
	cout<<x;
	
}

