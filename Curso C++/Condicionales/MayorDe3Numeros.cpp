
#include<iostream>


using namespace std;


int main() {
	int a;
	int b;
	int c;
	
	
	cout<<"Ingrese el numero a: "<<endl; cin>>a;
	
	cout<<"Ingrese el numero b: "<<endl; cin>>b;
	
	cout<<"Ingrese el numero c: "<<endl; cin>>c;
	
	if (a == b || a == c) {
		cout<<"Algunos de los numeros son iguales";
	} else {
		if (a > b && a > c) {
			cout<<"El numero: "<<a<<" es el mayor";
		} else if (b > a && b > c) {
		cout<<"El numero: "<<b<<" es el mayor";
		} else {
			cout<<"El numero: "<<c<<" es el mayor";
		}
	
	}
	return 2;
}
