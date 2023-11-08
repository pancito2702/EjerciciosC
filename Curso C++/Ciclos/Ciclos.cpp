

#include<iostream>;

using namespace std;

int main() {
	int num = 0;
	int sumador = 0;
	
	for (int i = 0; i < 5; i++) {
		cout<<"Posición: "<<i+1<<"\n";
		cout<<"Introduzca el numero: ";
		cin>>num;
		sumador += num;
	}
	cout<<"El resultado de la suma de los 5 numeros es: "<<sumador;
	
	return 0;
}


