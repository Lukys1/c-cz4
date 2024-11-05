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

int x=0;
int y=3;

    for (int i=3;i<=6*8+3;i=i+8) 
      { 
             gotoxy(i,x); 
             cout<<"Dolny   "; 
        
         }
            for (int i=3;i<=6*8+3;i=i+8) 
      { 
             gotoxy(i,y); 
             cout<<"Dolny   "; 
        
         }
            for (int i=3;i<=6*8+3;i=i+8) 
      { 
             gotoxy(i,x); 
             cout<<"Dolny   "; 
        
         }
	     
    system("PAUSE"); 
    return EXIT_SUCCESS; 
} 
