#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	system("chcp 1250>0");
int gor,dol;
int l,i,j;
	
	powrot:
	cout<<"Podaj doln¹ wartoœæ dol=";
	cin>>dol;
	cout<<"Podaj górn¹ wartoœæ gor=";
	cin>>gor;
	
	cout<<"Znalezione liczby bliŸniacze to:"<<endl;
	
	if(dol>gor ||dol<2){
		cout<<"Wartoœci musz¹ byæ wiêksze od 1 oraz wartoœæ gor musi byæ wiêksza od dol"<<endl;
		goto powrot;
	}
	
	for (l = dol; l <= gor - 2; l++) {
        int l2 = l + 2;

        bool pierwsza_l = true;
        for (i = 2; i <= sqrt(l); ++i) {
            if (l % i == 0) {
                pierwsza_l = false;
                break;
            }
        }
        
          bool druga_l = true;
        for (j = 2; j <= sqrt(l2); ++j) {
            if (l2 % j == 0) {
                druga_l = false;
                break;
            }
        }
        
        if(pierwsza_l && druga_l){
        	cout<<"	"<<l<<"	"<<l2<<endl;
		}
	
}
	return 0;
}
