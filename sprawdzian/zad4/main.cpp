#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char *argv[])
{
 

 int x = 39;

 
 for (int i = 0; i<=x-1 ; ++i){
 	 int w = (i*i)+i+41;
	
	if(i%5==0){	system("PAUSE");
			system("cls");
	}
	


	cout<<"i="<<i<<"	";
	cout<<"w("<<i<<")="<<w<<endl;
  }


 system("PAUSE");
 return EXIT_SUCCESS;
}
