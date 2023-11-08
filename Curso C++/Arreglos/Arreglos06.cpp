
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	
	int numero[] = {1,4,3,10,2};
	int sumador = 0;
	int mayor = 0;
	
	for(int i = 0; i < 5; i++) {
		sumador += numero[i];
		
		if (numero[i] > mayor) {
			mayor = numero[i];
		}	
		
	}
	
	if (mayor == sumador-mayor) {
		cout<<"El numero "<<mayor<<" equivale a la suma de los demas";
	} else {
		cout<<"No existe ningun numero que sea igual a la suma de los demas";
	}
	
	
	
	
	getch();
	return 0;
}
