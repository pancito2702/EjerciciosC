/*1. Escriba un programa que lea de la entrada estandar dos numeros y muestre
en la salida estandar su suma, resta, multiplicacion y division*/


#include<iostream>

using namespace std;


int main() {
	int num1;
	int num2;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	cout<<"La suma de los numeros es: "<<num1+num2<<endl;
	cout<<"La resta de los numeros es: "<<num1-num2<<"\n";
	cout<<"La multiplicacion de los numeros es: "<<num1*num2<<"\n";
	cout<<"La division de los numeros es: "<<num1/num2;
	
	
	return 0;	
}



