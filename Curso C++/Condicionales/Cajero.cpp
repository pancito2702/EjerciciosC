
#include<iostream>

using namespace std;

int main() {
	
	int saldo_inicial = 1000;
	int opc = 0;
	float extra = 0;
	float saldo = 0;
	float retiro = 0;
	
	cout<<"\tBienvenido a su cajero virtual: "<<endl;
	
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	
	cout<<"3. Salir"<<endl;
	
	cout<<"Digite la opcion que desee: ";
	
	cin>>opc;
	
	switch(opc) {
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;
			break;
		case 2:
			cout<<"Ingrese la cantidad de dinero a retirar: ";
			cin>>retiro;
			if (retiro > saldo_inicial) {
				cout<<"No tiene esa cantidad de dinero";
			} else {
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo;
			
			}
			break;
		case 3:
			cout<<"Saliendo del programa...";
			break;
		default:
			cout<<"Opcion invalida";
		
	}
	
	
	
	return 0;
}
