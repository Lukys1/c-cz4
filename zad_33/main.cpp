#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	system("chcp 1250");
	system("cls");
char znak;
	
	

	for(int i=20; i<=255;i++ )
	{
		if(i%81==0){
			cout<<"wcisnij dowolny klawisz aby kontynuowac"<<endl;
			cin>>znak;
			system("cls");
		}
		
		if(i<100){
		
		cout<<"kod znaku "<<i<<"  "<<(char) i<<"		"; 
		
		if(i%3==2){
			cout<<"\n";
		}}
		
			if(i>=100){
		
		cout<<"kod znaku "<<i<<" "<<(char) i<<"		"; 
		
		if(i%3==2){
			cout<<"\n";
		}}
	}
	return 0;
}
