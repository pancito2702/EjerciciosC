/*3. Realice un programa que lea de la entrada estandar los siguientes datos
de una persona: edad,sexo y altura, al final estos datos deben ser 
mostrado en pantall 
*/




#include<iostream>

using namespace std;

int main() {
	int edad = 0;
	char sexo[10];
	float altura = 0.00;
	
	cout<<"Ingrese la edad de la persona: ";cin>>edad;
	cout<<"Ingrese el sexo de la persona MASCULINO/FEMENINO: ";cin>>sexo;
	cout<<"Ingrese la altura de la persona: ";cin>>altura;
	
	
	cout<<"\nLa edad de la persona es: "<<edad<<endl<<"El sexo de la persona es: "<<sexo<<endl<<"La altura de la persona es: "<<altura;
	
	
	
	
	
	
	
	
	return 0;
}





