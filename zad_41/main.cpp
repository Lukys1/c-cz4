#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 cout<<"podaj dolna wartosc dol= ";
 int dol, gor,suma;
 cin>>dol;
  cout<<"podaj gorna wartosc gora= ";
 cin>>gor;
 

 
 
 
 for (int i = dol; i<=gor ; ++i){
 	
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
 cout<<"liczba "<<i<<" to jest liczba pierwsza \n";
 suma += i;

 }
  }
cout<<"suma= "<<suma<<"\n";

 system("PAUSE");
 return EXIT_SUCCESS;
}
