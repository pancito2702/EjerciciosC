
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	float a,b,c, resultado1 = 0, resultado2 = 0;
	
	cout<<"Ingrese el valor de a: "<<endl; cin>>a;
	cout<<"Ingrese el valor de b: "<<endl; cin>>b;
	cout<<"Ingrese el valor de c: "<<endl; cin>>c;
	
	
	resultado1 = (-b-(sqrt(pow(b,2)-(4*a*c)))) / (2*a);
	resultado2 = (-b+(sqrt(pow(b,2)-(4*a*c)))) / (2*a);
	
	cout<<"El resultado 1 es: "<<resultado1<<endl;
	cout<<"El resultado 2 es: "<<resultado2<<endl;
	
	return 0;
}

