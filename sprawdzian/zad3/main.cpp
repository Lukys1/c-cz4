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
  int x=5;


    for (int i=1;i<=x;i++) 
      { 
      
             gotoxy(50,i+10); 
             cout<<"*"; 
             gotoxy(i+47,13); 
             cout<<"*"; 
            

            }       
    system("PAUSE"); 
    return EXIT_SUCCESS; 
} 
