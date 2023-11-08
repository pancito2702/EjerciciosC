#include<iostream>
#include<conio.h>
using namespace std;

int main() {
	int n = 0;
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	int numeros[n];
	
	for(int i = 0; i < n; i++) {
		cout<<"Ingrese numero: ";
		cin>>numeros[i];
		cout<<"Numero ingresado: "<<numeros[i]<<" Posicion: "<<i+1<<endl;
	}
	
	
	
	getch();
	return 0;
}
