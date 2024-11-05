#include <iostream>

using namespace std;


int main(int argc, char** argv) {


int dlugosc = 7;

cout<<"  | ";
for(int l = 1; l<=dlugosc; ++l){

cout<<" "<<l<<" ";

}
cout<<endl;
cout<<" ========================"<<endl;



	for(int i = 1; i<=dlugosc; ++i){
		
		cout<<i<<" | ";
		
			for(int j = 1; j<=dlugosc; ++j){
			
	
			
	
	
	
				if(i*j>9){
				cout<<i*j<<" ";
			}
			else{
				cout<<" "<<i*j<<" ";
			}
			
		
		
		
	}
	
		cout<<endl;


}
	return 0;
}
