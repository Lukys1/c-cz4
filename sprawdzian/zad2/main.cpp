#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{
system("chcp 1250<0");
float srednia,suma;
int x,y;
start:
cout<<"Podaj liczbê, od której bêdziesz zlicza³ liczby parzyste dwucyfrowe= ";
cin>>x;
if(x<10){
	cout<<"Liczba musi byæ dwucyfrowa!"<<endl;
	goto start;
}
y=0;

 for (int i = x; i<100; i++){

if(i%2==0){


suma+=i;

cout<<i<<" ";
y++;


}




 }
 srednia=suma/y;
cout<<"calkowita suma="<<suma<<endl;

cout<<"srednia="<<srednia<<endl;

cout<<"ilosc liczb parzystych wiêkszych od liczby " <<x<<"to: "<<y;

 system("PAUSE");
 return EXIT_SUCCESS;
}
