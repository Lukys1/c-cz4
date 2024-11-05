#include <cstdlib>
#include <iostream>
#include <windows.h> 
using namespace std;

void gotoxy(int x, int y) 
{ 
 COORD coord; 
 coord.X = x; 
 coord.Y = y; 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
}
int main(int argc, char *argv[]){
	int dlugosc,wiersz,kolumna,pol;
	
	cout<<"Podaj zmienna (kolumne ekranu): ";
	cin>>kolumna;
	
	cout<<"Podaj zmienna (wiersz ekranu): ";
	cin>>wiersz;
	
	cout<<"Podaj dlugosc linii: ";
	cin>>dlugosc;
 
 pol=dlugosc/2;

 for(int i = -pol; i <=pol; i++){
 	
 	gotoxy(kolumna+i, wiersz);
 	
 	if(i==0){
 		
	 cout<<"0";}
	 
	 else{
	 	cout<<"-";
	 }
	 
	 
	 
 }
 
 cout<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}

