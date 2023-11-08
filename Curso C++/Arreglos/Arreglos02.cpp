
#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	
	int numeros[] = {1,2,3,4,5,6,7};
	int multiplicador = 1;
	
	for (int i = 0; i < 7; i++) {0
		multiplicador *= numeros[i];
	}
	
	cout<<"Multiplicacion de los elementos del arreglos: "<<multiplicador;
	
	
	getch();
	return 0;
}
