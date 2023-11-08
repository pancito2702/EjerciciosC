

#include<iostream>

using namespace std;

int main() {
	
	int x = 0;
	int y;
	int potencia = 1;
	cout<<"Ingrese x: "<<endl;
	cin>>x;
	cout<<"Ingrese y: "<<endl;
	cin>>y;
	if ( x < 0 || y < 0) {
		cout<<"X o Y no son numeros positivos"<<endl;
	} else {
		for (int i = 1; i <= y; i++) {
		     potencia *= x; 
		}
		cout<<"Potencia de: "<<x<<" elevado a la: "<<y<<"="<<potencia;
	}
	

	
	
	
	
	return 0;
}
