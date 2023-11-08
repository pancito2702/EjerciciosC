
#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	
	
	int num = 0;
	int sumador = 0;
	
	
	do {
		cout<<"Ingrese un numero: "<<endl;
		cin>>num;
		if ( num != 0 ) {
			sumador += num;
		}
		
	} while ( (num < 20  || num > 30) && num != 0 );
	
	
	cout<<"Suma de los numeros que no estan en el rango [20-30] ni son 0:  "<<sumador;
	
	
	system(pause);
	return 0;
}
