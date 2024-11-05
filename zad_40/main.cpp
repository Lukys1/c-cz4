#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 cout<<"numer z dziennika=";
 int nr;
 int k;
 cin>>nr;
 int i;
 

 
 int liczba =1000+nr*100+15;
 
 cout<<"Podana liczba = 1000+nr_z_dziennika*100+15= "<<liczba<<endl;
 
 for (int i = liczba +1; ; ++i){
 	
 bool koniec =true;
 
 for( int j=2;j<=sqrt(i);++j)
 {
 
	 
 	
 if (i % j==0) 
 {
 
 
 koniec = false;
 break;
}}

 
 if (koniec)
 {
 	liczba = i;

 break;
 }
  }
 cout<<"Najbli¿sza liczba pierwsza to "<<liczba<<"\n";
 system("PAUSE");
 return EXIT_SUCCESS;
}

