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
	int numer,wiersz,kolumna;
	
	cout<<"Podaj swoj numer w dzienniku: ";
	cin>>numer;
 
 wiersz = 5+ numer%3;
 kolumna = 11 + numer%2;
 
 
 cout<<"Wiersz= "<<wiersz<<endl;
 cout<<"Kolumna= "<<kolumna<<endl;
 
 for(int i = wiersz; i <=kolumna; i++){
 	gotoxy(i, kolumna);
 	cout<<"*";
 }
 
  for(int i = wiersz; i <=kolumna; i++){
 	gotoxy(i, wiersz);
 	cout<<"*";
 }
 
  for(int i = wiersz; i <=kolumna; i++){
 	gotoxy(wiersz, i);
 	cout<<"*";
 }
 
  for(int i = wiersz; i <=kolumna; i++){
 	gotoxy(kolumna, i);
 	cout<<"*";
 }

 cout<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}

