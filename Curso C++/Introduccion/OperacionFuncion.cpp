
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float x,y,operacion = 0;
	
	cout<<"Ingrese el valor de x: "<<endl; cin>>x;
	cout<<"Ingrese el valor de y: "<<endl; cin>>y;
	
	operacion = (sqrt(x)) / (pow(y,2) - 1);
	

	cout<<"El resultado de la operacion es de: "<<operacion;	
	

	return 0;
}


