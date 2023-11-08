
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int numeros[] = {1,2,3,4,5};
	int sumador = 0;
	
	for (int i = 0; i < 5; i++) {
		sumador += numeros[i];
	}
	
	cout<<"Suma de los elementos del arreglos: "<<sumador;
	
	
	getch();
	return 0;
}
