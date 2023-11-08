
#include<iostream>
#include<math.h>
using namespace std;

int main() {
	
	int opc = 0;
	int num = 0;
	
	cout<<"**Menu de Opciones**"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Saber si el numero es par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opc;
	
	switch (opc) {
		case 1:
			cout<<"Ingrese el numero a elevar: ";
			cin>>num;
			num = pow(num, 3);
			cout<<"El numero elevado al cubo es: "<<num;
			break;
		case 2:
			cout<<"Ingrese el numero a comprobarr: ";
			cin>>num;	
			if (num % 2 == 0) {
				cout<<"El numero: "<<num<<" es par";
			} else {
					cout<<"El numero: "<<num<<" es impar";
			}
			break;
	    case 3:
	    	cout<<"Saliendo del programa...";
	    	break;
	}
	
	
	
	return 0;
}
