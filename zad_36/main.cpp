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
	int a=1;
	
 for (int i=0;i<=22;i++)
 {
 gotoxy(a,i);
 a++;
 
 cout<<"*"<<"\n";

 } 
 system("PAUSE");
 return EXIT_SUCCESS;
}
