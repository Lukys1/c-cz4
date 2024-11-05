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
 
int main(int argc, char *argv[]) 
{ 
  int m,nr;
  cout<<"Podaj Twoj nr w dzienniku: ";
  cin>>nr;
  
  cout<<"Podaj Twoj miesiac urodzenia: ";
  cin>>m;
  

int sze=nr+20;
int wys=m+5;

cout<<"szerokosc= "<<sze<<endl;
cout<<"wysokosc= "<<wys;


    for (int i=1;i<=wys;i++) 
      { 
      
             gotoxy(sze/2,i+10); 
             cout<<"*"; 
             
            }    
			
	for (int j=0;j<=sze;j++) 
      { 
      
      
             gotoxy(j,wys+11); 
             cout<<"*"; 
             
            }    
    system("PAUSE"); 
    return EXIT_SUCCESS; 
} 
