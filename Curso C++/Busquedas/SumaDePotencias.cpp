

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main() {
	
	int num = 0;
	int sumador = 0;
	int elevacion = 0;
	
	cout<<"Ingrese num: ";
	cin>>num;

	for (int i = 1; i <= num; i++) {
		elevacion = pow(2, i);
		sumador += elevacion;
		
	}
	cout<<"Total de la suma de potencias: "<<sumador;
	
	getch();
	return 0;
}
