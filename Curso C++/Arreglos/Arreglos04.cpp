
#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	int numeros[] = {1,2,3,4,5};
	
	for(int i = 4; i > -1; i--) {
		cout<<"Numero: "<<numeros[i]<<" Posicion: "<<i<<endl;
	}
	
	
	
	getch();
	return 0;
}
