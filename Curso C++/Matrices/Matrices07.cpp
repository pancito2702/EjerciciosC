
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	
	
	
	int numeros[100][100];
	char band = 'F';
	int filas = 0;
	
	int columnas = 0;
	
	cout<<"Digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {
			cout<<"Digite un numero: ";
			cin>>numeros[i][j];
		}
	}
	
	
	if(filas == columnas) {
		for(int i = 0; i < filas; i++) {
			for(int j = 0; j < columnas; j++) {
				if(numeros[i][j] == numeros[j][i]) {
					band = 'V';
				}
			}
		}	
	} 
	if (band == 'V') {
		cout<<"La matriz es simetrica";
	} else {
		cout<<"La matriz no es simetrica";
	}
	
	
	getch();
	return 0;
}
