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

int x=50;
    for (int i=1;i<=20;i++) 
      { 
             gotoxy(x,i); 
             cout<<"gieras"; 
            x-=2;
 
             }       
    system("PAUSE"); 
    return EXIT_SUCCESS; 
} 