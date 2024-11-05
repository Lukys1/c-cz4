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
  int x;

  cout<<"dlugosc: ";
  cin>>x;

    for (int i=0;i<=x;i++) 
      { 
             gotoxy(40,i); 
             cout<<"**"; 
            
 
             }       
    system("PAUSE"); 
    return EXIT_SUCCESS; 
} 