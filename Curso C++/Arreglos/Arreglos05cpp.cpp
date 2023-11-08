
#include<iostream>

using namespace std;

int main() {
	int mayor = 0;
	int n = 0;
	
	cout<<"Ingrese cantidad de elementos del arreglo: ";
	cin>>n;
	
	int arreglo[n];
	
	for (int i = 0; i < n; i++) {
		cout<<"Ingrese numero: ";
		cin>>arreglo[i];
		if (arreglo[i] > mayor) {
			mayor = arreglo[i];
		}
	}
	cout<<"Numero mas grande del arreglo: "<<mayor;
	
	
}
