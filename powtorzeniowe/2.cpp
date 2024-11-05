#include <cstdlib>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(int argc, char *argv[])
{

float srednia,suma;
int x,y;
cout<<"podaj liczbe ltorej podzielnosc bedziesz badał:";
cin>>x;
y=0;

 for (int i = 10; i<100; i++){



suma+=i;
srednia=suma/i;

cout<<"suma w petli "<<i<<"= "<<suma<<"srednia="<<srednia<<endl;



if(i % x ==0){

y++;

}

 }
cout<<"\ncalkowita suma="<<suma;

cout<<"\nsrednia="<<srednia;

cout<<"ilosc liczb podzielnych przez" <<x<<"to "<<y;

 system("PAUSE");
 return EXIT_SUCCESS;
}
