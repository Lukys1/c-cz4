#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(int argc, char** argv) {
	system("chcp 1250>0");

double  x = 0;
 
for(int i =1; i <= 1000000; i++){
	double a;
	a=1.0/i;
	
	x=x+a;
	cout<<"Liczba wynosi: "<<x<<endl;
	
	
	
}



	return 0;
}
