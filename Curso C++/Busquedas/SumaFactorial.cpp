
#include<iostream>

using namespace std;

int main() {
	
	
	int num = 0;
	int sumador = 0;
	
	int factorial = 1;
	cout<<"Ingrese num: ";
	cin>>num;
	
	
	for (int i = 1; i <= num; i++) {
		factorial *= i;
		sumador += factorial;	
	}
	
	cout<<"Suma de factoriales hasta: "<<num<<" = "<<sumador;
	
	return 0;
}
