#include<iostream>
#include<string>
using namespace std;

int main(){
	string arrayz[]={"B234"," C234", "A345", "C15", "B177", "G3003", "C235", "B179",};
	int arraysize= sizeof(arrayz)/ sizeof(arrayz[0]);
	for (int i =0; i< arraysize;i++){
		if(arrayz[i][0]=='C'){
			cout<<arrayz[i]<<endl;
		}
	}
	return 0;
}