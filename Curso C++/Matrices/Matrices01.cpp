
#include<iostream>
#include<conio.h>


using namespace std;

int main() {
	
	
	int filas = 0;
	int columnas = 0;


	cout<<"Ingrese numero de filas: ";
	cin>>filas;
	cout<<"Ingrese numero de columnas: ";
	cin>>columnas;
	int matriz[filas][columnas];
	
	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {
			cout<<"Ingrese numero: ";
			cin>>matriz[i][j];
		}
	}   

	
	for(int i = 0; i < filas; i++) {
		for(int j = 0; j < columnas; j++) {
			cout<<matriz[i][j]<<"--";
		}
		cout<<"\n";
	}

	
	getch();
	return 0;
}


