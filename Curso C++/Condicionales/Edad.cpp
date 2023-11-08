
#include<iostream>

using namespace std;

int main() {
	
	int edad = 0;
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	
	if (edad >= 18 && edad <= 25) {
		cout<<"La edad "<<edad<<" se encuentra en el rango de 18 a 25 años";
	} else {
		cout<<"La edad "<<edad<<" no se encuentra en rango de 18 a 25 años";
	}
	
	
	
	
	return 0;
}
