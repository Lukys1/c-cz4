#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 

 int x = 30;
 
 for (int i = x; i<=x+15 ; ++i){
 	
  if(i*i<1000){
 cout<<"I="<<i<<" I*I= "<<i*i<<" I*I*I="<<i*i*i<<endl;
  }
else{
   cout<<"I="<<i<<" I*I="<<i*i<<" I*I*I="<<i*i*i<<endl;
}

  }


 system("PAUSE");
 return EXIT_SUCCESS;
}
