
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main() {
	char palabra[] = "Pancito";
	
	char palabra2[] = {'X','D'};
	
	char nombre[30];
	
	
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	
	cout<<"Digite su nombre: ";
	//cin>>nombre;
	//No utilizar cin, no reconoce espacios
	//gets(nombre);
	// No utilizar gets, utiliza memoria que no le pertenece lo que causa errores
	cin.getline(nombre,20,'\n');
	cout<<nombre;
	
	
	
	getch();
	return 0;
}

