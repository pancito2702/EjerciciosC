
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	
	
	char cadena[50];
	
	cout<<"Ingrese texto: ";
	cin.getline(cadena,50,'\n');
	
	int longitud = 0;
	
	longitud = strlen(cadena);
	
	
	
	if(longitud > 10) {
		cout<<"Cumple requisitos";
	} else {
		cout<<"No cumple requisitos";
	}
	
	
	
	
	
	
	
	getch();
	return 0;
}


