/*
Lam calificacion final de un estudiante es la media ponderada de tres notas:
La nota de practicas que cuenta un 30% del total, La nota teorica que cuenta un
60% y la nota de participacion que cuenta el 10% restante. Escriba un programa lea 
de la entrada estandar las tres notas de un alumna y escriba en la salida 
estandar su nota final
*/



#include<iostream>

using namespace std;

int main() {
	float n1,n2,n3, total = 0;
	
	cout<<"Ingrese el valor de la nota de practicas: "; cin>>n1;
	cout<<"Ingrese el valor de la nota teorica: "; cin>>n2;
	cout<<"Ingrese el valor de la nota de participacion: "; cin>>n3;
	
	total = n1 + n2 + n3;
	
	cout<<"Nota final: "<<total;
	
	
	
	
	
	
}
