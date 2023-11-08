
#include<iostream>


using namespace std;


int main() {

	
	int pares[5] = {1, 3, 5, 7, 9};
	int impares[5] = {0, 2, 4, 6, 8};

	// Definimos y guardamos los punteros
	int *p_pares = pares;
	int *p_impares = impares;
	int *p_temporal;

	// Intercambiamos los punteros y listo
	p_temporal = p_pares;
	p_pares = p_impares;
	p_impares = p_temporal;


	cout<<sizeof(*pares);
	
	return 0;
	
}
