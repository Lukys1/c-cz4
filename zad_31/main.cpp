#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
	int mies;
	
	cout<<"Podaj miesi¹c twojego urodzenia: ";
	cin>>mies;

	if(mies % 2 == 1){
		mies++;
	}
	
for(int i=mies; i<=43; i=i+2 )
{
	cout<<i<<" ";
}
	return 0;
}

